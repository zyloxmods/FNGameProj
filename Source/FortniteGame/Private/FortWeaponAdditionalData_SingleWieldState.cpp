#include "FortWeaponAdditionalData_SingleWieldState.h"

UFortWeaponAdditionalData_SingleWieldState::UFortWeaponAdditionalData_SingleWieldState() {
    this->bUseSeparatePreviewOffsets = true;
    this->FrontendPreviewScale = 1;
    this->AnimationStyleToUse = EFortWeaponCoreAnimation::Melee;
    this->LiveAbility = NULL;
    this->LiveAnimSet = NULL;
    this->LiveMontage = NULL;
}

