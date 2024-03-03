#include "FortEnemyKilledParams.h"

void UFortEnemyKilledParams::SetParams(AFortPawn* _KilledPawn, AFortPlayerController* _KilledBy, UFortEnemyKilledParams*& ThisParam) {
}

void UFortEnemyKilledParams::BreakParams(AFortPawn*& _KilledPawn, AFortPlayerController*& _KilledBy) {
}

UFortEnemyKilledParams::UFortEnemyKilledParams() {
    this->KilledPawn = NULL;
    this->KilledBy = NULL;
}

