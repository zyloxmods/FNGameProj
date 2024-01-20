#include "FortEnemyDamagedParams.h"

void UFortEnemyDamagedParams::SetParams(AFortPawn* _DamagedPawn, AFortPlayerController* _DamagedBy, float _DamageAmount, UFortEnemyDamagedParams*& ThisParam) {
}

void UFortEnemyDamagedParams::BreakParams(AFortPawn*& _DamagedPawn, AFortPlayerController*& _DamagedBy, float& _DamageAmount) {
}

UFortEnemyDamagedParams::UFortEnemyDamagedParams() {
    this->DamagedPawn = NULL;
    this->DamagedBy = NULL;
    this->DamageAmount = 0.00f;
}

