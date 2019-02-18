#ifndef STORY_INCLUDE
#define STORY_INCLUDE

// INCLUDES
#include "SkazkaV2.h"

#include <string.h>

// Macros

#define LEN(arr) sizeof(arr)/sizeof(arr[0])

#define PRINT(line, message) set_win_tiles(1, line, strlen(message), 1, message)

// DECLARES

// PROTOTYPES
void intro();

void initWin();
void setDialogue(dialogue d);
void displayNextMessage();
void rollCreds();

void followBridge();
void followFootsteps();

UINT8 makeDecision(char* lineOne, char* lineTwo);

#endif