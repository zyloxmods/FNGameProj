#include "FortAnimInput_TurnInPlace.h"

FFortAnimInput_TurnInPlace::FFortAnimInput_TurnInPlace() {
    this->TurnThreshold90 = 0.00f;
    this->InitialTurnCurveValue = 0.00f;
    this->MaxAllowedRootYawOffset = 0.00f;
    this->RootYawOffset = 0.00f;
    this->RootYawOffsetAlpha = 0.00f;
    this->bWantsToTurn = false;
    this->bWantsToTurnInVehicle = false;
    this->bWantsToTurnAgain = false;
    this->bTurningLeft = false;
    this->LastTurnRotationAmount = 0.00f;
}

