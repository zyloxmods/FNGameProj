#include "SphericalDriveParams.h"

FSphericalDriveParams::FSphericalDriveParams() {
    this->Radius = 0.00f;
    this->LowSpeedAccelerationForce = 0.00f;
    this->HighSpeedAccelerationForce = 0.00f;
    this->MaxSpeedKmh = 0.00f;
    this->MaxInclineDeg = 0.00f;
    this->MaxAirControlForce = 0.00f;
    this->MaxAirControlSpeedKmh = 0.00f;
    this->AutoBrakeSpeedKmh = 0.00f;
    this->DragCoefficient = 0.00f;
    this->DragCoefficientAutoBrake = 0.00f;
    this->MaxAutoBrakeSpeedKmh = 0.00f;
    this->ContactRepulsionForce = 0.00f;
    this->ContactThreshold = 0.00f;
    this->MassDirectionMaxAngleDeg = 0.00f;
    this->MassDirectionStiffness = 0.00f;
    this->bMassDirectionInvert = false;
    this->ShellAngularDrag = 0.00f;
    this->TractionMultiplier = 0.00f;
}

