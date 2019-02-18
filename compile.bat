
REM Compile main files
"Compiler/bin/lcc" -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -c -o "SkazkaV2/SkazkaV2.o" "SkazkaV2/SkazkaV2.c"
"Compiler/bin/lcc" -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -c -o "SkazkaV2/music.o" "SkazkaV2/music.c"
"Compiler/bin/lcc" -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -c -o "SkazkaV2/story.o" "SkazkaV2/story.c"

REM Compile banks
"Compiler/bin/lcc" -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -Wf-bo1 -Wf-ba1 -c -o "SkazkaV2/bk1-bkg.o" "SkazkaV2/bk1-bkg.c"
"Compiler/bin/lcc" -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -Wf-bo2 -Wf-ba1 -c -o "SkazkaV2/bk2-bkg.o" "SkazkaV2/bk2-bkg.c"
"Compiler/bin/lcc" -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -Wf-bo3 -Wf-ba1 -c -o "SkazkaV2/bk3-bkg.o" "SkazkaV2/bk3-bkg.c"
"Compiler/bin/lcc" -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -Wf-bo4 -Wf-ba1 -c -o "SkazkaV2/bk4-story.o" "SkazkaV2/bk4-story.c"

REM Wrap them all together
"Compiler/bin/lcc" -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -Wl-yt2 -Wl-yo8 -Wl-ya1 -o "SkazkaV2/SkazkaV2.gb" "SkazkaV2/SkazkaV2.o" "SkazkaV2/music.o" "SkazkaV2/story.o" "SkazkaV2/bk1-bkg.o" "SkazkaV2/bk2-bkg.o" "SkazkaV2/bk3-bkg.o" "SkazkaV2/bk4-story.o"

REM Run the product
"Emulator/bgb64" "SkazkaV2/SkazkaV2.gb"