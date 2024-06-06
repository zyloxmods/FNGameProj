#include "FortAnimInput_TurnInPlace.h"

FFortAnimInput_TurnInPlace::FFortAnimInput_TurnInPlace() {
    TurnThreshold90 = 1;
    InitialTurnCurveValue = 1;
    MaxAllowedRootYawOffset = 1;
    RootYawOffset = 1;
    RootYawOffsetAlpha = 1;
    bWantsToTurn = false;
    bWantsToTurnInVehicle = false;
    bWantsToTurnAgain = false;
    bTurningLeft = false;
    LastTurnRotationAmount = 1;
}

