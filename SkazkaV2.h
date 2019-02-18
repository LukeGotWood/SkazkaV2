#ifndef SKAZKAV2_INCLUDE
#define SKAZKAV2_INCLUDE

// INCLUDES
#include <gb/gb.h>

#include "music.h"

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

#define storyBank 4

// PROTOTYPES
void speak(background bkg, UBYTE d);

void intro();
void followFootsteps();
void followBridge();
void initWin();
void setDialogue(char* d);
void displayNextMessage();
UINT8 makeDecision(char* lineOne, char* lineTwo);
void rollCreds();

void initInterrupt();
void clearBkg();
void setBkg(background bkg);

// Banked

// bk1-bk3
void _setBkg(background bkg);

// bk4
void _intro();
void _followFootsteps();
void _followBridge();
void _initWin();
void _setDialogue(char* d);
void _displayNextMessage();
UINT8 _makeDecision(char* lineOne, char* lineTwo);
void _rollCreds();

#endif
