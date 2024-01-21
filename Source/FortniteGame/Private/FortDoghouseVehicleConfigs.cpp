#include "FortDoghouseVehicleConfigs.h"

UFortDoghouseVehicleConfigs::UFortDoghouseVehicleConfigs() {
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
    this->PropSpeedPerLinearSpeed = 10.00f;
    this->PropSpeedPerLinearSpeedPassive = 0.10f;
    this->PropSpeedAccelLerpPerSecond = 10.00f;
    this->PropSpeedDecelLerpPerSecond = 0.01f;
    this->TaxiPitchProjTarget = 0.25f;
    this->MaxAltitudeZ = 21000.00f;
    this->StallAltitudeZ = 21000.00f;
    this->StallTime = 2.00f;
    this->StuckTimeBeforeStall = 0.50f;
    this->MinSkipShocksAltitudeZ = 400.00f;
    this->AltitudeUpdateFrequency = 0.10f;
    this->ControlStateNetUpdateFrequency = 0.03f;
    this->ForceHeadingUpdateFrequency = 0.50f;
    this->BoundsXYSplineClass = NULL;
}

