#include "FortSKFlyingVehicleConfigs.h"

UFortSKFlyingVehicleConfigs::UFortSKFlyingVehicleConfigs() {
    this->WheelRotationRange = 110.00f;
    this->VehicleFrontLowLateralFrictionMultiplier = 0.00f;
    this->VehicleRearLowLateralFrictionMultiplier = 0.00f;
    this->VehicleFrontHighLateralFrictionMultiplier = 1.00f;
    this->VehicleRearHighLateralFrictionMultiplier = 1.00f;
    this->LowToHighFrictionDuration = 0.30f;
    this->UphillIncline = 20.00f;
    this->ReverseToForwardFrontFriction = 0.10f;
    this->ReverseToForwardRearFriction = 0.30f;
    this->ReverseToForwardMaxSpeed = -5.00f;
}

