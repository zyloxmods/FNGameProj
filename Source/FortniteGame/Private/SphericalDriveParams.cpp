#include "SphericalDriveParams.h"

FSphericalDriveParams::FSphericalDriveParams() {
    Radius = 1;
    LowSpeedAccelerationForce = 1;
    HighSpeedAccelerationForce = 1;
    MaxSpeedKmh = 1;
    MaxInclineDeg = 1;
    MaxAirControlForce = 1;
    MaxAirControlSpeedKmh = 1;
    AutoBrakeSpeedKmh = 1;
    DragCoefficient = 1;
    DragCoefficientAutoBrake = 1;
    MaxAutoBrakeSpeedKmh = 1;
    ContactRepulsionForce = 1;
    ContactThreshold = 1;
    MassDirectionMaxAngleDeg = 1;
    MassDirectionStiffness = 1;
    bMassDirectionInvert = false;
    ShellAngularDrag = 1;
    TractionMultiplier = 1;
}

