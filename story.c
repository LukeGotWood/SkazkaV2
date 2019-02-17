#include "assets/narrative.c"
#include "dialogue.c"

#include "SkazkaV2.h"

#include "story.h"

// Function for the first section of the story
void intro() {

    // Load the first dialogue and run through
    setDialogue(beginning);
    displayNextMessage();

    speak(maincharacter, 2);
    displayNextMessage();

    speak(stepmother, 2);
    displayNextMessage();

    speak(maincharacter, 1);
    displayNextMessage();

    speak(stepmother, 1);
    displayNextMessage();

    speak(maincharacter, 1);
    displayNextMessage();

    speak(stepmother, 1);
    displayNextMessage();

    speak(maincharacter, 1);
    displayNextMessage();

    clearBackground();
    delay(1000);
    displayNextMessage();

    // Needs replacing with an image of footsteps
    clearBackground();
    delay(5000);
    displayNextMessage();

    // // Load the footsteps dialogue
    // if (makeDecision("FOLLOW THE", "FOOTSTEPS?")) {
    //     followFootsteps();
    // }
    // else {
    //     followBridge();
    // }

}

// Function for the footsteps encounter with babayaga
void followFootsteps() {

    // Load the babayaga dialogue
    return;

}

// Function for the bridge section of the story
void followBridge() {

    return;

}

// Function for the 