#ifndef GLOBAL_INCLUDE
#define GLOBAL_INCLUDE

// INCLUDES
#include <gb/gb.h>

// DEFINES

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

// Enum of every loadable dialogue options
const typedef enum {
    beginning,
    footprints,
    river
} dialogue;

// PROTOTYPES

void clearBkg();
void setBkg(background bkg);

void initSound();
void play();

void intro();
void speak(background bkg, UBYTE d);

void setDialogue(dialogue d);
void displayNextMessage();
void rollCreds();

void _setBkg(background bkg);

void _setDialogue(dialogue d);
void _displayNextMessage();
void _rollCreds();

void setTxt(UBYTE line, char* message);

#endif