#include "bk5-story.h"

// Initialise the window layer for printing messages
void initWin() {

    // Move the window layer to draw the frame in the correct position
	move_win(FRAME_X, FRAME_Y);

	// Load ASCII tiles and box frame into window layer
	set_win_data(FRAME_VRAM_LOC, frame_tile_data_size, frame_tile_data);
	set_win_data(FONT_VRAM_LOC, alpha_data_size, alpha_data);

    // map the frame to the window tiles
	set_win_tiles(0, 0, 20, 4, frame_map_data);

}

// Procedure to push text to the frame
void setTxt(UBYTE line, char* message) {
    set_win_tiles(TEXT_OFFSET, line, strlen(message), TEXT_HEIGHT, message);
}

// Function to set the current array of dialogue
void _setDialogue(dialogue d) {
    switch (d)
    {
        case river:
            lines = &_river[0];
            break;
    }
    dialogueCounter = 0;
    
}

// Procedure to display the next section of dialogue
void _displayNextMessage() {

    // Clear the background and initialise the frame
	clearBkg();
    initWin();
    
    // Clear the message window
	setTxt(1, CLEAR);
	setTxt(2, CLEAR);

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
		setTxt(2, lines[dialogueCounter]);

        // Wait for A button press
		waitpad(J_A);
		waitpadup();

        // Clear the window
		setTxt(1, CLEAR);
		setTxt(2, CLEAR);

        // Shift line to the top dialogue box
		setTxt(1, lines[dialogueCounter]);

        // Increment to the next line of dialogue
        dialogueCounter++;

	}

}