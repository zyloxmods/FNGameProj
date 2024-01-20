#include "FortSKPushVehicleConfigs.h"

UFortSKPushVehicleConfigs::UFortSKPushVehicleConfigs() {
    this->PedalForceMultiplier = 0.90f;
    this->PedalTopSpeedMultiplier = 1.50f;
    this->PedalForceDuration = 0.50f;
    this->CoastBrakingMinDelta = 1.00f;
    this->CoastBrakingMaxDelta = 10.00f;
    this->PedalMinDuration = 0.20f;
    this->MountDuration = 0.20f;
    this->DismountDuration = 0.50f;
    this->MinPreDismountCooldown = 0.15f;
    this->PreDismountCooldown = 0.50f;
    this->PedalCooldown = 0.95f;
    this->CoastBrakingStrength = 10.00f;
    this->ShoppingMinPedalCoastSpeed = 1.00f;
    this->VehicleDebugStrafeCoastMultiplier = 0.20f;
    this->CanCoastCooldown = 0.10f;
    this->MaxAutoDismountForwardSpeed = 2.00f;
    this->PedalMinForwardVelocity = -8.50f;
    this->FastDismountIncline = 12.50f;
    this->FastDismountDuration = 0.15f;
    this->CanCoastAfterFastDismountCooldown = 0.50f;
    this->PassengerVehicleWeightShiftYawStrength = 90.00f;
}

