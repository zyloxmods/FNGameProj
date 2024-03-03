#include "FortAnimInput_TurnInPlace.h"

FFortAnimInput_TurnInPlace::FFortAnimInput_TurnInPlace() {
    this->TurnThreshold90 = 1;
    this->InitialTurnCurveValue = 1;
    this->MaxAllowedRootYawOffset = 1;
    this->RootYawOffset = 1;
    this->RootYawOffsetAlpha = 1;
    this->bWantsToTurn = false;
    this->bWantsToTurnInVehicle = false;
    this->bWantsToTurnAgain = false;
    this->bTurningLeft = false;
    this->LastTurnRotationAmount = 1;
}

