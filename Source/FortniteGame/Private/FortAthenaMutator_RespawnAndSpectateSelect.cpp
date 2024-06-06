#include "FortAthenaMutator_RespawnAndSpectateSelect.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_RespawnAndSpectateSelect::OnSafezoneStateChanged(EFortSafeZoneState InSafeZoneState) {
}

void AFortAthenaMutator_RespawnAndSpectateSelect::OnRep_RespawnTargetDataArray() {
}

void AFortAthenaMutator_RespawnAndSpectateSelect::OnRep_ManagerObject() {
}

bool AFortAthenaMutator_RespawnAndSpectateSelect::GetCanPlayerSelectRespawnTargetBeforeTheyCanRespawn() const {
    return false;
}

void AFortAthenaMutator_RespawnAndSpectateSelect::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_RespawnAndSpectateSelect, RespawnTargetDataArray);
    DOREPLIFETIME(AFortAthenaMutator_RespawnAndSpectateSelect, bAreAllRespawnTargetsAvailableToAllPlayersCheat);
    DOREPLIFETIME(AFortAthenaMutator_RespawnAndSpectateSelect, ManagerObject);
}

AFortAthenaMutator_RespawnAndSpectateSelect::AFortAthenaMutator_RespawnAndSpectateSelect() {
    DefaultSpawnLocationCameraClass = NULL;
    DefaultRespawnTexture = NULL;
    DisplayPriority_Teammate = 0;
    CameraModeOverrideForNonPlayers = NULL;
    bAreAllRespawnTargetsAvailableToAllPlayersCheat = false;
    ManagerObject = NULL;
    ScreenFadeOutDeathCamTime = 1;
    ScreenFadeInSpectateCamTime = 1;
}

