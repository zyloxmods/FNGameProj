#include "AthenaPlayerHitPointBarBase.h"






float UAthenaPlayerHitPointBarBase::GetLastValuePercentage() const {
    return 0.0f;
}

float UAthenaPlayerHitPointBarBase::GetCurrentValuePercentage() const {
    return 0.0f;
}

UAthenaPlayerHitPointBarBase::UAthenaPlayerHitPointBarBase() : UUserWidget(FObjectInitializer::Get()) {
    this->PlayerVM = NULL;
    this->BarType = EHealthBarType::Health;
    this->ValueCurrent = 1;
    this->BeginDeltaInterpDelayMin = 1;
    this->BeginDeltaInterpDelayMax = 1;
    this->ValueLast = 1;
    this->ValueMax = 1;
    this->LastToCurrentUpdateRate = 1;
    this->bShouldDisplayShieldBar = true;
}

