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
#define FRAME_X 7
#define FRAME_Y 112
#define FRAME_VRAM_LOC 0x10
#define TEXT_OFFSET 0x01
#define TEXT_HEIGHT 0x01

#define FONT_VRAM_LOC 0x20

#define BGP_STD 0xE4
#define BGP_INV 0x1B

#define CLEAR "                  "

// Macros
#define LEN(arr) sizeof(arr)/sizeof(arr[0])

// Create a variable to hold the current array of dialogue
int *lines;

// Array counter
UBYTE dialogueCounter = 0;

// PROTOTYPES - _FUNCTION defined in SkazkaV2.h
void initWin();
void setTxt(UBYTE line, char* message);

#endif