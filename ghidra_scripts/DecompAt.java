import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Program;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.util.ArrayList;
import java.util.List;

public class DecompAt extends GhidraScript {

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String addrsFile = args[0];
        String outPath = args[1];

        BufferedReader br = new BufferedReader(new FileReader(addrsFile));
        List<String> lines = new ArrayList<String>();
        String ln;
        while ((ln = br.readLine()) != null) {
            lines.add(ln.trim());
        }
        br.close();

        DecompInterface di = new DecompInterface();
        di.setOptions(new DecompileOptions());
        di.openProgram(currentProgram);

        BufferedWriter w = new BufferedWriter(new FileWriter(outPath));
        int ok = 0;
        for (String line : lines) {
            if (line.isEmpty() || !line.startsWith("0x")) {
                continue;
            }
            long a = Long.parseLong(line.substring(2), 16);
            Address addr = toAddr(a);
            Function f = getFunctionAt(addr);
            if (f == null) {
                disassemble(addr);
                f = createFunction(addr, "Handler_" + String.format("%08X", Long.valueOf(a)));
            }
            String name = (f == null) ? "<no function>" : f.getName();
            w.write("//==================== " + name + " @ 0x" + String.format("%08X", Long.valueOf(a)) + " ====================\n");
            if (f != null) {
                try {
                    DecompileResults res = di.decompileFunction(f, 120, monitor);
                    if (res != null && res.getDecompiledFunction() != null) {
                        w.write(res.getDecompiledFunction().getC());
                        ok++;
                    } else {
                        w.write("// DECOMPILE FAILED: " + ((res == null) ? "null" : res.getErrorMessage()));
                    }
                } catch (Exception e) {
                    w.write("// EXCEPTION: " + e.toString());
                }
            }
            w.write("\n\n");
        }
        w.close();
        di.dispose();
        println("DecompAt done: " + ok + "/" + lines.size());
    }
}
