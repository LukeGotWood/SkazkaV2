#include "SkazkaV2.h"
#include "dialogue.c"

// Enum notes makes writing music more user friendly
enum notes {
    C0, Cd0, D0, Dd0, E0, F0, Fd0, G0, Gd0, A0, Ad0, B0,
    C1, Cd1, D1, Dd1, E1, F1, Fd1, G1, Gd1, A1, Ad1, B1,
    C2, Cd2, D2, Dd2, E2, F2, Fd2, G2, Gd2, A2, Ad2, B2,
    C3, Cd3, D3, Dd3, E3, F3, Fd3, G3, Gd3, A3, Ad3, B3,
    C4, Cd4, D4, Dd4, E4, F4, Fd4, G4, Gd4, A4, Ad4, B4,
    C5, Cd5, D5, Dd5, E5, F5, Fd5, G5, Gd5, A5, Ad5, B5,
    SILENCE, END
};

// Array of frequencies to match up to notes
const UWORD frequencies[] = {
    44, 156, 262, 363, 457, 547, 631, 710, 786, 854, 923, 986,
    1046, 1102, 1155, 1205, 1253, 1297, 1339, 1379, 1417, 1452, 1486, 1517,
    1546, 1575, 1602, 1627, 1650, 1673, 1694, 1714, 1732, 1750, 1767, 1783,
    1798, 1812, 1825, 1837, 1849, 1860, 1871, 1881, 1890, 1899, 1907, 1915,
    1923, 1930, 1936, 1943, 1949, 1954, 1959, 1964, 1969, 1974, 1978, 1982,
    1985, 1988, 1992, 1995, 1998, 2001, 2004, 2006, 2009, 2011, 2013, 2015
};

// Array of notes to be played as a song
const UBYTE music[] = {
    E4, E4, E4,
    C4, E4, G4, G3,

    C4, G3, E3,
    A3, B3, B3, A3,
    G3, E4, G4, A4,
    F4, G4, E4, C4, D4, B3,

    C4, G3, E3,
    A3, B3, B3, A3,
    G3, E4, G4, A4,
    F4, G4, E4, C4, D4, B3,

    G4, Fd4, F4, D4, E4,
    G3, A3, C4,
    A3, C4, D4,
    G4, Fd4, F4, D4, E4,
    C5, C5, C5,

    G4, Fd4, F4, D4, E4,
    G3, A3, C4,
    A3, C4, D4,
    Dd4, D4, C4,

    C4, C4, C4,
    C4, D4, E4, C4, A3, G3,
    C4, C4, C4,
    C4, D4, E4,

    C4, C4, C4,
    C4, D4, E4, C4, A3, G3,
    E4, E4, E4,
    C4, E4, G4,
    G3,

    C4, G3, E3,
    A3, B3, B3, A3,
    G3, E4, G4, A4,
    F4, G4, E4, C4, D4, B3,

    C4, G3, E3,
    A3, B3, B3, A3,
    G3, E4, G4, A4,
    F4, G4, E4, C4, D4, B3,

    E4, C4, G3,
    G3, A3, F4, F4, A3,
    B3, A4, A4, A4, G4, F4,
    E4, C4, A3, G3,

    E4, C4, G3,
    G3, A3, F4, F4, A3,
    B3, F4, F4, F4, E4, D4, C4,
    G3, E3, C3,

    C4, G3, E3,
    A3, B3, A3,
    Gd3, B3, Gd3,
    G3, Fd3, G3,

    END
};

// Array pointers
UBYTE i;
UBYTE j;

// Used to divide the clock by 2
UBYTE DIVIDER = 0;

// Procedure that runs on TIM interrupt
void ISR_TIM() {
    
    // Use divider to half tick frequency to 8kHz
    if (DIVIDER == 1) {
        DIVIDER = 0;

        // Check weather the current note is silent
        if(music[i] != SILENCE) {
            // Set the minimum and maximum frequency to the required frequency for the note
            // And trigger it
            NR13_REG = 0xFF & frequencies[music[i]];
            NR14_REG = (frequencies[music[i]] >> 8) | 1 << 7;
        }

        // Check if the next note is the last, if so, reset array counter i
        if (music[i + 1] == END) {
            i = 0;
        } else {
            i++;
        }
    } else {
        DIVIDER = 1;
    }
}

void main() {

    // Title screen
    setBkg(titlescreen);

    initSound();

    DISPLAY_ON;

    // Game loop
    while (1) {

        // Check for key presses
        while (!(joypad() & J_START || joypad() & J_A)) {
            if (joypad() & J_SELECT) {
                clearBackground();
                initWin();
                rollCreds();
                HIDE_WIN;

                // Title screen
                setBkg(titlescreen);
            }
        }
    
        clearBackground();
        initWin();

        setDialogue(beginning);
        displayNextMessage();

    }
}

// Function to initialize sound
void initSound() {

    // Setup interrupts
    disable_interrupts();
    add_TIM(ISR_TIM);
    enable_interrupts();

    // Set TMA to cause DIV_REG to reset back to 0x00
    TMA_REG = 0x00;

    // Set clock to 4096Hz
    TAC_REG = 0x04;

    // Handle TIM interrupts
    set_interrupts(TIM_IFLAG);

    // Enable sound
    NR52_REG = 0x80;
    
    // Enables left and right audio (all channels)
    NR51_REG = 0xFF;

    // Sets left and right volume
    NR50_REG = 7 | (7 << 4u);

    // Sets duty cycle of square wave and length load
    NR11_REG = 1 | (2 << 6);

    // Sets starting volume, and period
    NR12_REG = 3 | (0 << 3) | (4 << 4);

}

// Intermediate procedure to load in the correct bank for the requested asset
void setBkg(background bkg) {
    UINT8 i;
    UINT8 bank;

    // Iterate over backgroundBank array till a matching background is found
    for (i = 0; i < backgroundBankLen; i++) {
        if (backgroundBank[i][0] == bkg) {
            bank = backgroundBank[i][1];
            break;
        }
    }
    
    // Load the corresponding bank
    SWITCH_ROM_MBC1(bank);

    // Run the main setBkg procedure from the loaded bank
    HIDE_BKG;
    _setBkg(bkg);
    SHOW_BKG;
}

// Function to clear the background
void clearBackground() {

    for (i = 0; i < 20; i++) {
        for (j = 0; j < 18; j++) {
            set_bkg_tiles(i, j, 1, 1, 7);
        }
    }
}