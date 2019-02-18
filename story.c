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

    // Allow suer to make a decision to follow footsteps
    if (makeDecision("FOLLOW THE", "FOOTSTEPS?")) {
        followFootsteps();
    }
    else {
        followBridge();
    }

}

// Function for the footsteps encounter with babayaga
void followFootsteps() {

    // Load the footsteps dialogue
    setDialogue(footprints);

    clearBkg();
    displayNextMessage();

    speak(maincharacter, 1);
    
    clearBkg();
    delay(1000);
    displayNextMessage();

    clearBkg();
    delay(1000);
    displayNextMessage();

    speak(maincharacter, 1);

    clearBkg();
    delay(5000);
    speak(babayaga, 3);
    speak(babayaga, 1);

    clearBkg();
    delay(1000);
    displayNextMessage();

    clearBkg();
    delay(1000);
    displayNextMessage();

    delay(2000);

    rollCreds();

}

// Function for the bridge section of the story
void followBridge() {

    // Load the bridge dialogue
    setDialogue(river);

    clearBkg();
    displayNextMessage();

    speak(bridge, 2);
    speak(maincharacter, 1);

    // Allow user to make decision to cross the bridge
    if (makeDecision("CROSS THE", "BRIDGE?") == 0) {
        followBridge();
        return;
    }

    speak(bridge, 1);
    speak(maincharacter, 1);
    speak(bridge, 1);
    speak(drowning, 2);

    clearBkg();
    delay(1000);
    displayNextMessage();

    speak(drowning, 1);

    clearBkg();
    delay(1000);
    displayNextMessage();

    clearBkg();
    delay(1000);
    displayNextMessage();

    // Image of eyes slowly opening to silhouette
    clearBkg();
    delay(1000);
    displayNextMessage();

    speak(maincharacter, 1);
    speak(woodman, 2);

    clearBkg();
    delay(1000);
    displayNextMessage();

    speak(maincharacter, 1);
    speak(woodman, 1);
    speak(maincharacter, 1);

    clearBkg();
    delay(1000);
    displayNextMessage();

    speak(woodman, 1);

    // Allow suer to make a decision to follow footsteps
    if (makeDecision("DO YOU", "UNDERSTAND?")) {
        return;
    }
    else {
        return;
    }

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
    HIDE_WIN;
}

UINT8 makeDecision(char* firstLine, char* secondLine) {
    SWITCH_ROM_MBC1(storyBank);
    return _makeDecision(firstLine, secondLine);
}