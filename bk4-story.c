#include "bk4-story.h"

// Initialise the window layer for printing messages
void _initWin() {

	move_win(7, 112);

	// Load ASCII tiles and box frame into window layer
	set_win_data(0x10, 8, frame_tile_data);
	set_win_data(ASCII_START, 64, alpha);

	set_win_tiles(0, 0, 20, 4, frame_map_data);

}

// Function to set the current array of dialogue
void _setDialogue(dialogue d) {
    switch (d)
    {
        case beginning:
            lines = &_beginning[0];
            break;
    
        case footprints:
            lines = &_footprints[0];
            break;
    }
    dialogueCounter = 0;
    
}

// Function to display the next section of dialogue
void _displayNextMessage() {

    // Load ASCII values and clear background
	clearBkg();
    _initWin();
    
    // Clear the message window
	PRINT(1, CLEAR);
	PRINT(2, CLEAR);

    // Show the message window and hide sprites
	SHOW_WIN;

    // Dialogue loop
	while (1) {

        // If we reach a dialogue break, set the counter to the next location and return
        if(strcmp(lines[dialogueCounter],"BREAK") == 0) {
            dialogueCounter++;
            HIDE_WIN;
            return;
        }

        // If we reach the end of dialogue, reset the counter
        if(strcmp(lines[dialogueCounter],"END") == 0) {
            dialogueCounter = 0;
            HIDE_WIN;
            return;
        }

        // Print the top line of dialogue
		PRINT(2, lines[dialogueCounter]);

        // Wait for A button press
		waitpad(J_A);
		waitpadup();

        // Clear the window
		PRINT(1, CLEAR);
		PRINT(2, CLEAR);

        // Shift line to the top dialogue box
		PRINT(1, lines[dialogueCounter]);

        // Increment to the next line of dialogue
        dialogueCounter++;

	}

}

void _rollCreds() {

    UINT8 i;

	BGP_REG = 0x1BU;

	SHOW_WIN;

	for (i = 0; i < LEN(credits); i += 2) {
		PRINT(1, CLEAR);
		PRINT(2, CLEAR);
		PRINT(1, credits[i]);
		PRINT(2, credits[i + 1]);
		delay(1500);
	}

	BGP_REG = 0xE4U;

}