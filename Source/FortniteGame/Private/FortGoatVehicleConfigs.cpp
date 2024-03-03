#include "FortGoatVehicleConfigs.h"

UFortGoatVehicleConfigs::UFortGoatVehicleConfigs() {
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
    this->HandbrakeForce = 1;
    this->PowerSlideMinAngle = 1;
    this->MinLateralSpeedForPowerSlideBoost = 1;
    this->MaxAccumulatedPowerSlideBoost = 1;
    this->PowerSlideBoostAccumulationSteps.AddDefaulted(4);
    this->PowerSlideAccumulationMultiplier = 1;
    this->PowerSlideTopSpeedMultiplier = 1;
    this->PowerSlideTopSpeedInAirMultiplier = 1;
    this->PowerSlideStrength = 1;
    this->PowerSlideMinAngularSpeed = 1;
    this->PowerSlideMaxAngularSpeed = 1;
    this->BoostSteeringMultiplier = 1;
    this->BoostCooldown = 1;
    this->BoostSteeringMultiplierRampTime = 1;
    this->BoostSlowExtraStrength = 1;
    this->MinForwardSpeedBoostExtraStrength = 1;
    this->BoostTopSpeedForceMultiplier = 1;
    this->VehiclePowerSlideFrontMultiplier = 1;
    this->VehiclePowerSlideRearMultiplier = 1;
    this->PowerSlideMinPushForce = 1;
    this->CameraShakeAmplitudeMin = 1;
    this->CameraShakeAmplitudeMax = 1;
    this->SpringFudgeFactor = 1;
    this->CameraShakeNormalizedSpeed = 1;
    this->CameraShakeSpeedCurvePow = 1;
    this->PowerSlideShakeMultiplierMin = 1;
    this->PowerSlideShakeMultiplierMax = 1;
    this->BoostingCameraShakeAmount = 1;
    this->BoostCameraShakeFrequency = 1;
    this->SmoothedSpringCompressionMin = 1;
    this->SmoothedSpringCompressionMax = 1;
    this->PowerSlideMinSpringCompression = 1;
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
}

