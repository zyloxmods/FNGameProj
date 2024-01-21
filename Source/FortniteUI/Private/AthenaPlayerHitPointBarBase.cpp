#include "AthenaPlayerHitPointBarBase.h"

void UAthenaPlayerHitPointBarBase::SetDataSource(UAthenaPlayerViewModel* PlayerViewModel) {
}





float UAthenaPlayerHitPointBarBase::GetLastValuePercentage() const {
    return 0.0f;
}

float UAthenaPlayerHitPointBarBase::GetCurrentValuePercentage() const {
    return 0.0f;
}

UAthenaPlayerHitPointBarBase::UAthenaPlayerHitPointBarBase() : UUserWidget(FObjectInitializer::Get()) {
    this->PlayerVM = NULL;
    this->BarType = EHealthBarType::Health;
    this->ValueCurrent = 0.00f;
    this->BeginDeltaInterpDelayMin = 0.25f;
    this->BeginDeltaInterpDelayMax = 0.50f;
    this->ValueLast = 0.00f;
    this->ValueMax = 1.00f;
    this->LastToCurrentUpdateRate = 1.50f;
}

