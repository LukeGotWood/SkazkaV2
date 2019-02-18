#ifndef BK4_INCLUDE
#define BK4_INCLUDE

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

// PROTOTYPES - Non required as they are prototyped in SkazkaV2.h

#endif