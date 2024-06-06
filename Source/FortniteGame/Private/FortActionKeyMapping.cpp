#include "FortActionKeyMapping.h"

FFortActionKeyMapping::FFortActionKeyMapping() {
    ActionGroup = EFortInputActionGroup::AllModes;
    SubGameUsedIn = ESubGame::Campaign;
    InputScale = 1;
    bIsAxisMapping = false;
}

