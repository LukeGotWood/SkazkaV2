#include "story.h"

// Function for the first section of the story
void intro() {

    // Load the first dialogue and run through
    setDialogue(beginning);
    displayNextMessage();

    speak(maincharacter, 2);
    speak(stepmother, 2);
    speak(maincharacter, 1);
    speak(stepmother, 1);
    speak(maincharacter, 1);
    speak(stepmother, 1);
    speak(maincharacter, 1);

    clearBkg();
    delay(1000);
    displayNextMessage();

    // Needs replacing with an image of footsteps
    clearBkg();
    delay(5000);
    displayNextMessage();

    // // Load the footsteps dialogue
    // if (makeDecision("FOLLOW THE", "FOOTSTEPS?")) {
    //     followFootsteps();
    // }
    // else {
    //     followBridge();
    // }

}

// Calls setBkg(background bkg) and halts exercution for d * 1000ms
void speak(background bkg, UBYTE d) {
    setBkg(bkg);
    delay(d * 1000);
    displayNextMessage();
}

void setDialogue(dialogue d) {
    UBYTE i;
    UBYTE bank;

    for (i = 0; i < dialogueBankLen; i++) {
        if (dialogueBank[i][0] == d) {
            dialogueState = dialogueBank[i][1];
            bank = dialogueBank[i][1];
            break;
        }
    }

    SWITCH_ROM_MBC1(bank);
    _setDialogue(d);
}

void displayNextMessage() {
    SWITCH_ROM_MBC1(dialogueState);
    _displayNextMessage();
}

void rollCreds() {
    SWITCH_ROM_MBC1(creditsBank);
    _rollCreds();
}

// // Function for the footsteps encounter with babayaga
// void _followFootsteps() {

//     // Load the babayaga dialogue
//     return;

// }

// // Function for the bridge section of the story
// void _followBridge() {

//     return;

// }


// // Function to make a decision
// UINT8 _makeDecision(char* lineOne, char* lineTwo) {
    
//     // Set the default decision to no
// 	UINT8 decision = 0;

//     // Initialise the dialogue window
//     _initWin();

//     // Reverse the pallet
// 	BGP_REG = 0x1BU;
	
// 	clearBkg();
	
//     // Show the window and the question text
// 	SHOW_WIN;
// 	PRINT(1, lineOne);
// 	PRINT(2, lineTwo);

//     // Wait for question to be asked
//     delay(1000);

//     // Output the yes and no text dialogues
// 	set_bkg_tiles(5, 8, 10, 1, "YES     NO");

//     // Move the arrow sprite to the default location
// 	move_sprite(20, 116, 88);

//     // Show the sprite
// 	SHOW_SPRITES;

//     // Wait for the a button to be presses
// 	while (!(joypad() & J_A)) {
//         // If left button is pressed, move to the yes option and set decision true
// 		if (joypad() & J_LEFT) {
// 			decision = 1;
// 			//move_sprite(20, 56, 88);
// 			waitpadup();
// 		}
//         // If right button is pressed, move to no option and set decision false
// 		if (joypad() & J_RIGHT) {
// 			decision = 0;
// 			//move_sprite(20, 116, 88);
// 			waitpadup();
// 		}
// 	}
// 	waitpadup();
	
//     // Hide the window and sprites and reset the colour pallet to deafult
// 	HIDE_WIN;
// 	HIDE_SPRITES;
// 	BGP_REG = 0xE4U;

//     // Return yes or no
// 	return decision;

// }