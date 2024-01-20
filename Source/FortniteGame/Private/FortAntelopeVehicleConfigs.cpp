#include "FortAntelopeVehicleConfigs.h"

UFortAntelopeVehicleConfigs::UFortAntelopeVehicleConfigs() {
    this->BounceCrouchTime = 1.00f;
    this->BounceCrouchTimeDeadzone = 0.00f;
    this->BounceRecoilTime = 0.50f;
    this->BounceForcePerMass = 1000.00f;
    this->PassengerLeanMagnitude = 50.00f;
    this->PassengerLeanMinMagnitude = 0.00f;
    this->PassengerLeanLeftRightInterpolationPerSecond = 625.00f;
    this->PassengerLeanUpInterpolationPerSecond = 450.00f;
    this->PassengerLeanDownInterpolationPerSecond = 600.00f;
    this->PassengerLeanResetInterpolationPerSecond = 10.00f;
    this->PassengerLeanDeadzone = 0.10f;
    this->NaturalSlideMinAngle = 4.00f;
    this->BoostAccumulationRate = 0.20f;
    this->BoostExpenseRate = 0.40f;
    this->BoostPassiveExpenseRate = 0.20f;
    this->BoostTopSpeedMultiplier = 1.50f;
    this->BoostTopSpeedInAirMultiplier = 1.00f;
    this->BoostSteeringMultiplier = 0.50f;
    this->BoostCooldown = 0.50f;
    this->BoostSteeringMultiplierRampTime = 0.70f;
    this->BoostSlowExtraStrength = 2.00f;
    this->BoostTopSpeedForceMultiplier = 1.50f;
    this->VehicleBoostFrontFrictionMultiplier = 0.20f;
    this->VehicleBoostRearFrictionMultiplier = 0.10f;
    this->BoostMinPushForce = 0.00f;
    this->BoostSmashForgivenessDuration = 2.00f;
    this->BoostSmashForgivenessImpulse = 100.00f;
    this->CameraShakeAmplitudeMin = 0.00f;
    this->CameraShakeAmplitudeMax = 0.40f;
    this->SpringFudgeFactor = 300.00f;
    this->CameraShakeNormalizedSpeed = 70.00f;
    this->CameraShakeSpeedCurvePow = 1.00f;
    this->BoostingCameraShakeAmount = 2.00f;
    this->BoostCameraShakeFrequency = 100.00f;
    this->SmoothedSpringCompressionMin = 0.00f;
    this->SmoothedSpringCompressionMax = 0.80f;
    this->ScreenShakeFrequencyMin = 3.00f;
    this->ScreenShakeFrequencyMax = 30.00f;
    this->PassengerCameraShakeMultiplier = 1.00f;
    this->ScreenShakeYawFrequencyMultiplier = 0.70f;
    this->TreadWidth = 1.75f;
    this->RumbleMultiplier = 0.75f;
    this->SparksRumbleMultiplier = 0.00f;
    this->BoostCameraOffset = 0.00f;
    this->ADSCameraDistance = 0.00f;
    this->PassengerCameraOffset = -200.00f;
    this->ADSInterpSpeed = 15.00f;
    this->MaxHealthToDestroyPropWhileBoosting = 500.00f;
    this->BoostDestructionAngle = 55.00f;
    this->UpNormalMinProtected = 0.50f;
    this->UpForwardMinProtected = -0.10f;
    this->MinBoostTime = 0.40f;
    this->TractionVelocityDelta = 15.00f;
}

