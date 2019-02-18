#ifndef STORY_INCLUDE
#define STORY_INCLUDE

// INCLUDES
#include "SkazkaV2.h"

#include <string.h>

#include "assets/narrative.c"
#include "assets/alpha.c"
#include "assets/frame.c"
#include "assets/arrow.c"
#include "assets/credits.c"

// DEFINES

// Constants
#define ASCII_START 0x20
#define CLEAR "                  "

// Macros

#define LEN(arr) sizeof(arr)/sizeof(arr[0])

#define PRINT(line, message) set_win_tiles(1, line, strlen(message), 1, message)

// Create a variable to hold the current array of dialogue
int *lines;

// Array counter
UBYTE dialogueCounter = 0;

// PROTOTYPES
void intro();
void followFootsteps();
void followBridge();
void initWin();
void setDialogue(char* d);
void displayNextMessage();
UINT8 makeDecision(char* lineOne, char* lineTwo);
void rollCreds();

#endif