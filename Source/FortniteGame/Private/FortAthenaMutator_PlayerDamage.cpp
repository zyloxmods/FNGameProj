#include "FortAthenaMutator_PlayerDamage.h"

AFortAthenaMutator_PlayerDamage::AFortAthenaMutator_PlayerDamage() {
    this->bIsUsingHitResult = false;
    this->DamageMultiplier = 1;
    this->DetectionType = EPlayerDamageHeightRatioDetectionType::None;
}

