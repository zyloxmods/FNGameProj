#include "SphericalDriveParams.h"

FSphericalDriveParams::FSphericalDriveParams() {
    this->Radius = 1;
    this->LowSpeedAccelerationForce = 1;
    this->HighSpeedAccelerationForce = 1;
    this->MaxSpeedKmh = 1;
    this->MaxInclineDeg = 1;
    this->MaxAirControlForce = 1;
    this->MaxAirControlSpeedKmh = 1;
    this->AutoBrakeSpeedKmh = 1;
    this->DragCoefficient = 1;
    this->DragCoefficientAutoBrake = 1;
    this->MaxAutoBrakeSpeedKmh = 1;
    this->ContactRepulsionForce = 1;
    this->ContactThreshold = 1;
    this->MassDirectionMaxAngleDeg = 1;
    this->MassDirectionStiffness = 1;
    this->bMassDirectionInvert = false;
    this->ShellAngularDrag = 1;
    this->TractionMultiplier = 1;
}

