#include <gb/gb.h>
#include <string.h>

#include "assets/alpha.c" // Sprite sheet with ASCII characters
#include "assets/frame.c"
#include "assets/arrow.c"

#include "assets/credits.c"

// Constants
#define ASCII_START 0x20
#define CLEAR "                  "

// Create a variable to hold the current array of dialogue
int *lines;

// Array counter
UBYTE dialogueCounter = 0;

// Macros

#define LEN(arr) sizeof(arr)/sizeof(arr[0])

#define PRINT(line, message) set_win_tiles(1, line, strlen(message), 1, message)

// Initialise the window layer for printing messages
void initWin() {

	move_win(7, 112);

	// Load ASCII tiles and box frame into window layer
	set_win_data(0x10, 8, frame_tile_data);
	set_win_data(ASCII_START, 64, alpha);

	set_win_tiles(0, 0, 20, 4, frame_map_data);

}

// Function to set the current array of dialogue
void setDialogue(char* d) {
    dialogueCounter = 0;
    lines = &d[0];
}

// Function to display the next section of dialogue
void displayNextMessage() {

    // Load ASCII values and clear background
	clearBkg();
    initWin();
    
    // Clear the message window
	PRINT(1, CLEAR);
	PRINT(2, CLEAR);

    // Show the message window and hide sprites
	SHOW_WIN;
	HIDE_SPRITES;

    // Dialogue loop
	while (1) {

        // If we reach a dialogue break, set the counter to the next location and return
        if(strcmp(lines[dialogueCounter],"BREAK") == 0) {
            dialogueCounter++;
            SHOW_SPRITES;
            HIDE_WIN;
            return;
        }

        // If we reach the end of dialogue, reset the counter
        if(strcmp(lines[dialogueCounter],"END") == 0) {
            dialogueCounter = 0;
            SHOW_SPRITES;
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

// Function to make a decision
UINT8 makeDecision(char* lineOne, char* lineTwo) {
    
    // Set the default decision to no
	UINT8 decision = 0;

    // Initialise the dialogue window
    initWin();

    // Reverse the pallet
	BGP_REG = 0x1BU;
	
	clearBkg();
	
    // Show the window and the question text
	SHOW_WIN;
	PRINT(1, lineOne);
	PRINT(2, lineTwo);

    // Wait for question to be asked
    delay(1000);

    // Output the yes and no text dialogues
	set_bkg_tiles(5, 8, 10, 1, "YES     NO");

    // Move the arrow sprite to the default location
	move_sprite(20, 116, 88);

    // Show the sprite
	SHOW_SPRITES;

    // Wait for the a button to be presses
	while (!(joypad() & J_A)) {
        // If left button is pressed, move to the yes option and set decision true
		if (joypad() & J_LEFT) {
			decision = 1;
			//move_sprite(20, 56, 88);
			waitpadup();
		}
        // If right button is pressed, move to no option and set decision false
		if (joypad() & J_RIGHT) {
			decision = 0;
			//move_sprite(20, 116, 88);
			waitpadup();
		}
	}
	waitpadup();
	
    // Hide the window and sprites and reset the colour pallet to deafult
	HIDE_WIN;
	HIDE_SPRITES;
	BGP_REG = 0xE4U;

    // Return yes or no
	return decision;

}

void rollCreds() {

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