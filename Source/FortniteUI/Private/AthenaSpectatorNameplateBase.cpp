#include "AthenaSpectatorNameplateBase.h"



void UAthenaSpectatorNameplateBase::OnWeaponChanged(UAthenaRemotePlayerViewData* InPlayerData, AFortWeapon* InNewWeapon) {
}


void UAthenaSpectatorNameplateBase::OnVehicleStateChanged(UAthenaRemotePlayerViewData* InPlayerData, AActor* InNewVehicle, AActor* InOldVehicle) {
}




void UAthenaSpectatorNameplateBase::OnPlayerPawnChanged(UAthenaRemotePlayerViewData* InPlayerData, AFortPlayerPawn* InPlayerPawn) {
}





UAthenaSpectatorNameplateBase::UAthenaSpectatorNameplateBase() {
    this->DistanceToCameraOffsetScale = 0.05f;
    this->MinZOffset = 125.00f;
    this->MaxZOffset = 450.00f;
    this->bOverrideNameplateScaleToMax = false;
    this->WeaponIcon = NULL;
    this->WeaponBackground = NULL;
    this->CurrentDistanceState = EAthenaSpectatorNameplateDistanceState::Near;
    this->CurrentDetailState = EAthenaSpectatorNameplateDetailState::High;
}

