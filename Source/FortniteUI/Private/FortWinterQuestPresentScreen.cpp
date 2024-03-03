#include "FortWinterQuestPresentScreen.h"







UFortWinterQuestPresentScreen::UFortWinterQuestPresentScreen() {
    this->DecreaseOnShake = 1;
    this->LerpTimeForShakeDecrease = 1;
    this->TimeUntilShakeRecharge = 1;
    this->LerpTimeForShakeRecharge = 1;
    this->EventLevelInstance = NULL;
    this->Button_Shake = NULL;
    this->Button_ShakeIOS = NULL;
    this->Button_ShakeAndroid = NULL;
    this->Button_Open = NULL;
    this->Text_ReasonCannotOpen = NULL;
}

