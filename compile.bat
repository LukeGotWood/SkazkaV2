"Compiler/bin/lcc" -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -c -o "SkazkaV2/SkazkaV2.o" "SkazkaV2/SkazkaV2.c"
"Compiler/bin/lcc" -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -Wf-bo1 -Wf-ba1 -c -o "SkazkaV2/bank1.o" "SkazkaV2/bank1.c"
"Compiler/bin/lcc" -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -Wf-bo2 -Wf-ba2 -c -o "SkazkaV2/bank2.o" "SkazkaV2/bank2.c"
"Compiler/bin/lcc" -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -Wf-bo3 -Wf-ba3 -c -o "SkazkaV2/bank3.o" "SkazkaV2/bank3.c"

"Compiler/bin/lcc" -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -Wl-yt2 -Wl-yo4 -Wl-ya1 -o "SkazkaV2/SkazkaV2.gb" "SkazkaV2/SkazkaV2.o" "SkazkaV2/bank1.o" "SkazkaV2/bank2.o" "SkazkaV2/bank3.o"

"Emulator/bgb64" "SkazkaV2/SkazkaV2.gb"