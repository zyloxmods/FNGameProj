#include "FortItemLayerAnimInstance.h"

UFortItemLayerAnimInstance::UFortItemLayerAnimInstance() {
    Speed2D = 1;
    FallPlayRate = 1;
    DBNOTurnPlayRate = 1;
    ADSToNonADSBlendTime = 1;
    NonADSToADSBlendTime = 1;
    SlopeSlidingPitch = 1;
    SlopeSlidingRoll = 1;
    Gender = EFortCustomGender::Invalid;
    bIsMoving2D = false;
    bIsAboveMinimumLocomotionSpeed = false;
    bIsTargeting = false;
    bIsRelaxedLevel1 = false;
    bIsRelaxedLevel2 = false;
    bIsCrouching = false;
    bIsJumpBoosting = false;
    bSwimmingJumpInitiatedFromWater = false;
    bIsRelaxedLevel1AndNotJumpBoosting = false;
    bIsRelaxedLevel1AndNotJumpingFromWater = false;
    bIsInVehicle = false;
    bIsDBNO = false;
    bIsPlayingMeleeAnim = false;
}

