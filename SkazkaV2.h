#ifndef SKAZKAV2_INCLUDE
#define SKAZKAV2_INCLUDE

// INCLUDES
#include "global.h"

// DEFINITIONS

// Flags to indicate if a new bkg needs to be drawn
UBYTE drawBkg_FLAG = 0;

int drawBkg_QUEUE;

// Constant of the length of backgroundBank array
#define backgroundBankLen 14

// Array linking background images to there corresponding banks
const int backgroundBank[backgroundBankLen][2] = {
    {titlescreen, 1},
    {stepmother, 1},
    {babayaga, 1},
    {maincharacter, 1},
    {bridge, 2},
    {woodman, 2},
    {drowning, 2},
    {flower, 2},
    {flowerjar, 3},
    {goat, 3},
    {handwithteeth, 3},
    {jar, 3},
    {teethout, 3},
    {teethsack, 3}
};

// PROTOTYPES
void initInterrupt();

#endif
