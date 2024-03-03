#include "AthenaSpectatorNameplateBase.h"








void UAthenaSpectatorNameplateBase::OnPlayerPawnChanged(UAthenaRemotePlayerViewData* InPlayerData, AFortPlayerPawn* InPlayerPawn) {
}





UAthenaSpectatorNameplateBase::UAthenaSpectatorNameplateBase() {
    this->DistanceToCameraOffsetScale = 1;
    this->MinZOffset = 1;
    this->MaxZOffset = 1;
    this->bOverrideNameplateScaleToMax = false;
    this->CurrentDistanceState = EAthenaSpectatorNameplateDistanceState::Near;
    this->CurrentDetailState = EAthenaSpectatorNameplateDetailState::High;
}

