#include "FortGoatVehicleConfigs.h"

UFortGoatVehicleConfigs::UFortGoatVehicleConfigs() {
    BounceCrouchTime = 1;
    BounceCrouchTimeDeadzone = 1;
    BounceRecoilTime = 1;
    BounceForcePerMass = 1;
    PassengerLeanMagnitude = 1;
    PassengerLeanMinMagnitude = 1;
    PassengerLeanLeftRightInterpolationPerSecond = 1;
    PassengerLeanUpInterpolationPerSecond = 1;
    PassengerLeanDownInterpolationPerSecond = 1;
    PassengerLeanResetInterpolationPerSecond = 1;
    PassengerLeanDeadzone = 1;
    HandbrakeForce = 1;
    PowerSlideMinAngle = 1;
    MinLateralSpeedForPowerSlideBoost = 1;
    MaxAccumulatedPowerSlideBoost = 1;
    PowerSlideBoostAccumulationSteps.AddDefaulted(4);
    PowerSlideAccumulationMultiplier = 1;
    PowerSlideTopSpeedMultiplier = 1;
    PowerSlideTopSpeedInAirMultiplier = 1;
    PowerSlideStrength = 1;
    PowerSlideMinAngularSpeed = 1;
    PowerSlideMaxAngularSpeed = 1;
    BoostSteeringMultiplier = 1;
    BoostCooldown = 1;
    BoostSteeringMultiplierRampTime = 1;
    BoostSlowExtraStrength = 1;
    MinForwardSpeedBoostExtraStrength = 1;
    BoostTopSpeedForceMultiplier = 1;
    VehiclePowerSlideFrontMultiplier = 1;
    VehiclePowerSlideRearMultiplier = 1;
    PowerSlideMinPushForce = 1;
    CameraShakeAmplitudeMin = 1;
    CameraShakeAmplitudeMax = 1;
    SpringFudgeFactor = 1;
    CameraShakeNormalizedSpeed = 1;
    CameraShakeSpeedCurvePow = 1;
    PowerSlideShakeMultiplierMin = 1;
    PowerSlideShakeMultiplierMax = 1;
    BoostingCameraShakeAmount = 1;
    BoostCameraShakeFrequency = 1;
    SmoothedSpringCompressionMin = 1;
    SmoothedSpringCompressionMax = 1;
    PowerSlideMinSpringCompression = 1;
    ScreenShakeFrequencyMin = 1;
    ScreenShakeFrequencyMax = 1;
    PassengerCameraShakeMultiplier = 1;
    ScreenShakeYawFrequencyMultiplier = 1;
    TreadWidth = 1;
    RumbleMultiplier = 1;
    SparksRumbleMultiplier = 1;
    BoostCameraOffset = 1;
    ADSCameraDistance = 1;
    PassengerCameraOffset = 1;
    ADSInterpSpeed = 1;
}

