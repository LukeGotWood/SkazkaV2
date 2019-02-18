#include "music.h"

// Function to initialize sound
void initSound() {

    // Set TMA to cause DIV_REG to reset back to 0x00
    TMA_REG = 0x00;

    // Set clock to 4096Hz
    TAC_REG = 0x04;

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

// Procedure to play current note
void play() {
    // Use divider to half tick frequency to 8kHz
    if (DIVIDER == 1) {
        DIVIDER = 0;

        // Check weather the current note is silent
        if(music[musicPointer] != SILENCE) {
            // Set the minimum and maximum frequency to the required frequency for the note
            // And trigger it
            NR13_REG = 0xFF & frequencies[music[musicPointer]];
            NR14_REG = (frequencies[music[musicPointer]] >> 8) | 1 << 7;
        }

        // Check if the next note is the last, if so, reset array counter i
        if (music[musicPointer + 1] == END) {
            musicPointer = 0;
        } else {
            musicPointer++;
        }
    } else {
        DIVIDER = 1;
    }
}