#include "FortItemLayerAnimInstance_UncleBrolly.h"

UFortItemLayerAnimInstance_UncleBrolly::UFortItemLayerAnimInstance_UncleBrolly() {
    this->LandingPredictedTimer = 1;
    this->bShouldUpdateYawCorrection = false;
    this->bWasAcceleratingBeforeDodge = true;
    this->UncleBrollyDeployCurveValue = 1;
    this->DashChargeTier = 1;
    this->DashChargeAdditivePlayrate = 1;
    this->bIsUmbrellaFailing = false;
    this->bIsMeleeGuarding = false;
    this->bIsSprinting = false;
    this->bIsInAir = false;
    this->bIsLandingPredicted = false;
    this->bIsJumping = false;
    this->bIsDodging = false;
    this->bIsDodgingEast = false;
    this->bIsDodgingSouth = false;
    this->bIsDodgingWest = false;
    this->bIsDashing = false;
    this->bIsDashCharging = false;
    this->bIsDashPredictingEnd = false;
    this->bIsChargeTier1 = false;
    this->bIsChargeTier2 = false;
    this->bIsChargeTier3 = false;
    this->bMeleeGuardingOrUmbrellaFailing = false;
    this->bTransition_Default_to_GuardLoop = false;
    this->bTransition_Default_to_GuardIntro = false;
    this->bTransition_GuardIntro_to_Default = false;
    this->bUpperBodyShouldPassThrough = false;
    this->bUmbrellaGliderIsOpen = false;
}

