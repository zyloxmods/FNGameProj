#include "AthenaPlayerVitalityBarBase.h"

void UAthenaPlayerVitalityBarBase::SetDataSource(UAthenaPlayerViewModel* PlayerViewModel) {
}

UAthenaPlayerVitalityBarBase::UAthenaPlayerVitalityBarBase() : UUserWidget(FObjectInitializer::Get()) {
    this->PlayerVM = NULL;
}

