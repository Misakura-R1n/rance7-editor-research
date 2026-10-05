import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Program;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.List;

public class DecompAt extends GhidraScript {

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length != 2) throw new IllegalArgumentException("DecompAt <addresses-file> <output-file>");
        String addrsFile = args[0];
        String outPath = args[1];

        BufferedReader br = Files.newBufferedReader(Path.of(addrsFile), StandardCharsets.UTF_8);
        List<String> lines = new ArrayList<String>();
        String ln;
        while ((ln = br.readLine()) != null) {
            lines.add(ln.trim());
        }
        br.close();

        DecompInterface di = new DecompInterface();
        di.setOptions(new DecompileOptions());
        di.openProgram(currentProgram);

        Path output = Path.of(outPath).toAbsolutePath();
        Files.createDirectories(output.getParent());
        BufferedWriter w = Files.newBufferedWriter(output, StandardCharsets.UTF_8);
        int ok = 0;
        for (String line : lines) {
            if (monitor.isCancelled()) throw new InterruptedException("DecompAt cancelled");
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
