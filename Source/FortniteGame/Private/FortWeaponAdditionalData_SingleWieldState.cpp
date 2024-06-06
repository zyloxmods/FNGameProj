#include "FortWeaponAdditionalData_SingleWieldState.h"

UFortWeaponAdditionalData_SingleWieldState::UFortWeaponAdditionalData_SingleWieldState() {
    bUseSeparatePreviewOffsets = true;
    FrontendPreviewScale = 1;
    AnimationStyleToUse = EFortWeaponCoreAnimation::Melee;
    LiveAbility = NULL;
    LiveAnimSet = NULL;
    LiveMontage = NULL;
}

