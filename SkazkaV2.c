#include "SkazkaV2.h"

void main() {
    DISPLAY_ON;

    while (1) {
        setBkg(titlescreen);

        delay(1000);

        setBkg(stepmother);

        delay(1000);

        setBkg(babayaga);

        delay(1000);

        setBkg(maincharacter);

        delay(1000);

        setBkg(woodman);

        delay(1000);

        setBkg(bridge);

        delay(1000);

        setBkg(drowning);

        delay(1000);

        setBkg(flower);

        delay(1000);

        setBkg(flowerjar);

        delay(1000);

        setBkg(goat);

        delay(1000);

        setBkg(handwithteeth);

        delay(1000);

        setBkg(jar);

        delay(1000);

        setBkg(teethout);

        delay(1000);

        setBkg(teethsack);

        delay(1000);
    }
}

void setBkg(background bkg) {
    UINT8 i;
    UINT8 bank;

    for (i = 0; i < backgroundBankLen; i++) {
        if (backgroundBank[i][0] == bkg) {
            bank = backgroundBank[i][1];
            break;
        }
    }

    SWITCH_ROM_MBC1(bank);

    HIDE_BKG;
    _setBkg(bkg);
    SHOW_BKG;
}