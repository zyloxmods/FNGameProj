#include "FortDoghouseVehicleConfigs.h"

UFortDoghouseVehicleConfigs::UFortDoghouseVehicleConfigs() {
    this->WheelRotationRange = 1;
    this->VehicleFrontLowLateralFrictionMultiplier = 1;
    this->VehicleRearLowLateralFrictionMultiplier = 1;
    this->VehicleFrontHighLateralFrictionMultiplier = 1;
    this->VehicleRearHighLateralFrictionMultiplier = 1;
    this->LowToHighFrictionDuration = 1;
    this->UphillIncline = 1;
    this->ReverseToForwardFrontFriction = 1;
    this->ReverseToForwardRearFriction = 1;
    this->ReverseToForwardMaxSpeed = 1;
    this->PropSpeedPerLinearSpeed = 1;
    this->PropSpeedPerLinearSpeedPassive = 1;
    this->PropSpeedAccelLerpPerSecond = 1;
    this->PropSpeedDecelLerpPerSecond = 1;
    this->TaxiPitchProjTarget = 1;
    this->MaxAltitudeZ = 1;
    this->StallAltitudeZ = 1;
    this->StallTime = 1;
    this->StuckTimeBeforeStall = 1;
    this->MinSkipShocksAltitudeZ = 1;
    this->AltitudeUpdateFrequency = 1;
    this->ControlStateNetUpdateFrequency = 1;
    this->ForceHeadingUpdateFrequency = 1;
}

