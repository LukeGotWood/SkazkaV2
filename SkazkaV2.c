#include "SkazkaV2.h"

// Procedure that runs on TIM interrupt
void ISR_TIM() {
    play();
}

// Procedure that runs on VBL interrupt
void ISR_VBL() {
    
    // draw background
    if (drawBkg_FLAG) {
        setBkg(drawBkg_QUEUE);

        drawBkg_FLAG = 0;
    }
}

// Main function
void main() {

    // Initilize interrupts
    initInterrupt();

    // Initialize the sound registers
    initSound();

    DISPLAY_ON;

    // Game loop
    while (1) {

        // Title screen
        drawBkg(titlescreen);
        delay(1000);

        // Check for key presses
        while (!(joypad() & J_START || joypad() & J_A)) {
            if (joypad() & J_SELECT) {

                // Roll the credits
                 rollCreds();

                // Title screen
                drawBkg(titlescreen);
            }
        }

        // Run the intro
        intro();

    }
}

// Procedure to setup and enable interrupts
void initInterrupt() {

    // Setup TIM interrupts
    disable_interrupts();
    add_TIM(ISR_TIM);
    add_VBL(ISR_VBL);
    enable_interrupts();

    // Handle TIM interrupts
    set_interrupts(TIM_IFLAG | VBL_IFLAG);
}

// Procedure to clear the background
void clearBkg() {
    UBYTE i;
    UBYTE j;

    for (i = 0x00; i < 0x14; i++) {
        for (j = 0x00; j < 0x12; j++) {
            set_bkg_tiles(i, j, 0x01, 0x01, 0xFF);
        }
    }
}

 void drawBkg(background bkg) {
    drawBkg_QUEUE = bkg;
    drawBkg_FLAG = 1;
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