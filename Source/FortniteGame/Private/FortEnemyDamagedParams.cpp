#include "FortEnemyDamagedParams.h"

void UFortEnemyDamagedParams::SetParams(AFortPawn* _DamagedPawn, AFortPlayerController* _DamagedBy, float _DamageAmount, UFortEnemyDamagedParams*& ThisParam) {
}

void UFortEnemyDamagedParams::BreakParams(AFortPawn*& _DamagedPawn, AFortPlayerController*& _DamagedBy, float& _DamageAmount) {
}

UFortEnemyDamagedParams::UFortEnemyDamagedParams() {
    DamagedPawn = NULL;
    DamagedBy = NULL;
    DamageAmount = 1;
}

