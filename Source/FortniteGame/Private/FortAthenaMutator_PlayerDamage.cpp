#include "FortAthenaMutator_PlayerDamage.h"

AFortAthenaMutator_PlayerDamage::AFortAthenaMutator_PlayerDamage() {
    bIsUsingHitResult = false;
    DamageMultiplier = 1;
    DetectionType = EPlayerDamageHeightRatioDetectionType::None;
}

