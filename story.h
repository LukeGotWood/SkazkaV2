#ifndef STORY_INCLUDE
#define STORY_INCLUDE

// INCLUDES
#include "SkazkaV2.h"

// DECLARES

#define creditsBank 4

int dialogueState;

// PROTOTYPES
void intro();
void speak(background bkg, UBYTE d);

void setDialogue(dialogue d);
void displayNextMessage();
void rollCreds();

#endif