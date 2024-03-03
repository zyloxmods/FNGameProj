#include "FortFerretVehicleConfigs.h"

UFortFerretVehicleConfigs::UFortFerretVehicleConfigs() {
    this->BounceCrouchTime = 1;
    this->BounceCrouchTimeDeadzone = 1;
    this->BounceRecoilTime = 1;
    this->BounceForcePerMass = 1;
    this->PassengerLeanMagnitude = 1;
    this->PassengerLeanMinMagnitude = 1;
    this->PassengerLeanLeftRightInterpolationPerSecond = 1;
    this->PassengerLeanUpInterpolationPerSecond = 1;
    this->PassengerLeanDownInterpolationPerSecond = 1;
    this->PassengerLeanResetInterpolationPerSecond = 1;
    this->PassengerLeanDeadzone = 1;
    this->BoostSteeringMultiplier = 1;
    this->BoostCooldown = 1;
    this->BoostSteeringMultiplierRampTime = 1;
    this->BoostSlowExtraStrength = 1;
    this->MinForwardSpeedBoostExtraStrength = 1;
    this->BoostTopSpeedForceMultiplier = 1;
    this->MinSpeedForWingTrails = 1;
    this->CameraShakeAmplitudeMin = 1;
    this->CameraShakeAmplitudeMax = 1;
    this->SpringFudgeFactor = 1;
    this->CameraShakeNormalizedSpeed = 1;
    this->CameraShakeSpeedCurvePow = 1;
    this->BoostingCameraShakeAmount = 1;
    this->BoostCameraShakeFrequency = 1;
    this->SmoothedSpringCompressionMin = 1;
    this->SmoothedSpringCompressionMax = 1;
    this->ScreenShakeFrequencyMin = 1;
    this->ScreenShakeFrequencyMax = 1;
    this->PassengerCameraShakeMultiplier = 1;
    this->ScreenShakeYawFrequencyMultiplier = 1;
    this->TreadWidth = 1;
    this->RumbleMultiplier = 1;
    this->SparksRumbleMultiplier = 1;
    this->BoostCameraOffset = 1;
    this->ADSCameraDistance = 1;
    this->PassengerCameraOffset = 1;
    this->ADSInterpSpeed = 1;
    this->LeftMuzzleSocketName = TEXT("muzzleLeft");
    this->RightMuzzleSocketName = TEXT("muzzleRight");
    this->MaxHealthToDestroyPropWithDirectHit = 1;
    this->ImpactScaleWhenBoosting = 1;
    this->MaxAltitudeForWaterTest = 1;
    this->bUseBiplaneComponentsForProjectileOrigins = false;
    this->bUseLTMBiplaneForReplayWeaponFX = false;
}

