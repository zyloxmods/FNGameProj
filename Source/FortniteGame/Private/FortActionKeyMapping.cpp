#include "FortActionKeyMapping.h"

FFortActionKeyMapping::FFortActionKeyMapping() {
    this->ActionGroup = EFortInputActionGroup::AllModes;
    this->SubGameUsedIn = ESubGame::Campaign;
    this->InputScale = 1;
    this->bIsAxisMapping = false;
}

