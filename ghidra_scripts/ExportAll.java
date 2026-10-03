import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Parameter;

import java.io.BufferedWriter;
import java.io.FileOutputStream;
import java.io.OutputStreamWriter;
import java.io.Writer;

public class ExportAll extends GhidraScript {

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String outDir = args.length > 0 ? args[0] : "C:\\temp";
        String decompPath = outDir + "\\all_functions.c";
        String listPath = outDir + "\\functions.csv";

        Writer listW = new BufferedWriter(new OutputStreamWriter(new FileOutputStream(listPath), "UTF-8"));
        listW.write("entry,name,size,params\n");

        DecompInterface di = new DecompInterface();
        di.setOptions(new DecompileOptions());
        di.setSimplificationStyle("decompile");
        di.openProgram(currentProgram);

        Writer decompW = new BufferedWriter(new OutputStreamWriter(new FileOutputStream(decompPath), "UTF-8"), 1 << 16);

        int n = 0;
        FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
        while (it.hasNext()) {
            Function f = it.next();
            if (monitor.isCancelled()) break;
            long ep = f.getEntryPoint().getOffset();
            long size = f.getBody().getNumAddresses();
            StringBuilder params = new StringBuilder();
            Parameter[] ps = f.getParameters();
            for (int i = 0; i < ps.length; i++) {
                if (i > 0) params.append(";");
                params.append(ps[i].getDataType().getName()).append(" ").append(ps[i].getName());
            }
            listW.write(String.format("0x%08X,%s,%d,\"%s\"%n", ep, f.getName(), size, params));
            n++;

            decompW.write(String.format("//==================== %s @ 0x%08X (size %d) ====================%n",
                    f.getName(), ep, size));
            try {
                DecompileResults res = di.decompileFunction(f, 90, monitor);
                if (res != null && res.getDecompiledFunction() != null) {
                    decompW.write(res.getDecompiledFunction().getC());
                } else {
                    decompW.write("// DECOMPILE FAILED: " + (res == null ? "null" : res.getErrorMessage()));
                }
            } catch (Exception e) {
                decompW.write("// DECOMPILE EXCEPTION: " + e);
            }
            decompW.write("\n\n");
            if (n % 200 == 0) {
                listW.flush();
                decompW.flush();
            }
        }
        listW.close();
        decompW.close();
        di.dispose();
        println("DONE: exported " + n + " functions");
    }
}
