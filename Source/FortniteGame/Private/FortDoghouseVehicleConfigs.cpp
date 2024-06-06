#include "FortDoghouseVehicleConfigs.h"

UFortDoghouseVehicleConfigs::UFortDoghouseVehicleConfigs() {
    WheelRotationRange = 1;
    VehicleFrontLowLateralFrictionMultiplier = 1;
    VehicleRearLowLateralFrictionMultiplier = 1;
    VehicleFrontHighLateralFrictionMultiplier = 1;
    VehicleRearHighLateralFrictionMultiplier = 1;
    LowToHighFrictionDuration = 1;
    UphillIncline = 1;
    ReverseToForwardFrontFriction = 1;
    ReverseToForwardRearFriction = 1;
    ReverseToForwardMaxSpeed = 1;
    PropSpeedPerLinearSpeed = 1;
    PropSpeedPerLinearSpeedPassive = 1;
    PropSpeedAccelLerpPerSecond = 1;
    PropSpeedDecelLerpPerSecond = 1;
    TaxiPitchProjTarget = 1;
    MaxAltitudeZ = 1;
    StallAltitudeZ = 1;
    StallTime = 1;
    StuckTimeBeforeStall = 1;
    MinSkipShocksAltitudeZ = 1;
    AltitudeUpdateFrequency = 1;
    ControlStateNetUpdateFrequency = 1;
    ForceHeadingUpdateFrequency = 1;
}

