#include "FortActionKeyMapping.h"

FFortActionKeyMapping::FFortActionKeyMapping() {
    this->ActionGroup = EFortInputActionGroup::AllModes;
    this->SubGameUsedIn = ESubGame::Campaign;
    this->InputScale = 0.00f;
    this->bIsAxisMapping = false;
}

