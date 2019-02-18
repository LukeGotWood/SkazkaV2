#include "story.h"

// Function for the first section of the story
void intro() {

    // Load the first dialogue and run through
    setDialogue(beginning);
    displayNextMessage();

    speak(maincharacter, 2);
    speak(stepmother, 2);
    speak(maincharacter, 1);
    speak(stepmother, 1);
    speak(maincharacter, 1);
    speak(stepmother, 1);
    speak(maincharacter, 1);

    clearBkg();
    delay(1000);
    displayNextMessage();

    // Needs replacing with an image of footsteps
    clearBkg();
    delay(5000);
    displayNextMessage();

    // Load the footsteps dialogue
    if (makeDecision("FOLLOW THE", "FOOTSTEPS?")) {
        followFootsteps();
    }
    else {
        followBridge();
    }

}

// Function for the footsteps encounter with babayaga
void followFootsteps() {

    setBkg(babayaga);
    delay(1000);

}

// Function for the bridge section of the story
void followBridge() {

    setBkg(woodman);
    delay(1000);

}

void initWin() {
    SWITCH_ROM_MBC1(storyBank);
    _initWin();
}

void setDialogue(dialogue d) {
    SWITCH_ROM_MBC1(storyBank);
    _setDialogue(d);
}

void displayNextMessage() {
    SWITCH_ROM_MBC1(storyBank);
    _displayNextMessage();
}

void rollCreds() {
    SWITCH_ROM_MBC1(storyBank);
    _rollCreds();
}

UINT8 makeDecision(char* firstLine, char* secondLine) {
    SWITCH_ROM_MBC1(storyBank);
    return _makeDecision(firstLine, secondLine);
}