#include "AthenaAwardAlertBase.h"

void UAthenaAwardAlertBase::SetDataSource(UAthenaPlayerViewModel* PlayerViewModel) {
}


UAthenaAwardAlertBase::UAthenaAwardAlertBase() : UUserWidget(FObjectInitializer::Get()) {
    this->PlayerVM = NULL;
}

