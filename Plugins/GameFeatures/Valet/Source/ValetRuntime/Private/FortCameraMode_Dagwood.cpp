#include "FortCameraMode_Dagwood.h"

UFortCameraMode_Dagwood::UFortCameraMode_Dagwood() {
    this->HorizontalCameraSpaceOffsetWhileTurning = 1;
    this->SteeringAngleForMaxHorizontalOffset = 1;
    this->InAirVerticalOffset = 1;
    this->AirOffsetDampFactor = 1;
    this->SpeedAlphaDampFactor = 1;
    this->TimeInAirRequiredForVertOffset = 1;
    this->VehicleBasePitch = 1;
    this->HorizOffsetInterpSpeed = 1;
    this->HorizOffsetInterpSpeedRecovery = 1;
    this->CurrentSpeedAlpha = 1;
    this->CurrentVerticalOffset = 1;
    this->CurrentHorizontalOffset = 1;
    this->TimeInAir = 1;
    this->PreviousSpeed = 1;
    this->AppliedPitch = 1;
}

