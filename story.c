#include "assets/narrative.c"
#include "dialogue.c"

#include "SkazkaV2.h"

// Function for the ifirst section of the story
void intro() {

    setDialogue(beginning);
    displayNextMessage();

    speak(maincharacter, 2);
    displayNextMessage();

}