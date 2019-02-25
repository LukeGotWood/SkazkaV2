#ifndef SKAZKAV2_INCLUDE
#define SKAZKAV2_INCLUDE

// INCLUDES - LIBARYS
#include <gb/gb.h>

// DEFINITIONS

// Enum of every loadable background image
const typedef enum {
    titlescreen,
    stepmother,
    babayaga,
    maincharacter,
    bridge,
    woodman,
    drowning,
    flower,
    flowerjar,
    goat,
    handwithteeth,
    jar,
    teethout,
    teethsack
} background;

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

const typedef enum {
    beginning,
    footprints
} dialogue;

#define dialogueBankLen 2

const int dialogueBank[dialogueBankLen][2] = {
    {beginning, 4},
    {footprints, 4}
};

// INCLUDES - USER FILES
#include "music.h"
#include "story.h"

// PROTOTYPES
void initInterrupt();
void clearBkg();
void setBkg(background bkg);

// Banked

// bk1-bk3
void _setBkg(background bkg);

// bk4
void _setDialogue(dialogue d);
void _displayNextMessage();
void _rollCreds();

#endif
