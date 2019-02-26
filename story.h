#ifndef STORY_INCLUDE
#define STORY_INCLUDE

// INCLUDES
#include "global.h"

// DECLARES

#define creditsBank 4

int dialogueState;

#define dialogueBankLen 2

const int dialogueBank[dialogueBankLen][2] = {
    {beginning, 4},
    {footprints, 4},
    {river, 4}
};

// PROTOTYPES

void followFootsteps();
void followBridge();
UINT8 makeDecision(char* lineOne, char* lineTwo);

#endif