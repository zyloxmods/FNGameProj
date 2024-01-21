#include "AthenaIndicatorLayerBase.h"

void UAthenaIndicatorLayerBase::SetDataSource_Implementation(UAthenaPlayerViewModel* PlayerViewModel) {
}



UAthenaPlayerViewModel* UAthenaIndicatorLayerBase::GetPlayerViewModel() const {
    return NULL;
}

TArray<AFortPlayerStateAthena*> UAthenaIndicatorLayerBase::GetNameIndicatedPlayers() const {
    return TArray<AFortPlayerStateAthena*>();
}

UAthenaIndicatorLayerBase::UAthenaIndicatorLayerBase() {
    this->GeneralIndicators = NULL;
    this->PlayerVM = NULL;
    this->TeamIndicatorMesh = NULL;
    this->bWasTargeting = false;
}

