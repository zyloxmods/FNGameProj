#include "FortAthenaMutator_Disco.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_Disco::OnMutatorGameplayEvent(int32 EventId, int32 EventParam1, int32 EventParam2, int32 EventParam3) {
}

void AFortAthenaMutator_Disco::OnGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep) {
}

void AFortAthenaMutator_Disco::OnGamePhaseChanged(EAthenaGamePhase GamePhase) {
}

void AFortAthenaMutator_Disco::OnCaptureLockBroken(AAthenaCapturePoint* CapturePoint, uint8 LockTeam, uint8 BreakTeam) {
}

void AFortAthenaMutator_Disco::OnCaptureLock(AAthenaCapturePoint* CapturePoint, uint8 LockTeam, bool bIsNewLock) {
}

bool AFortAthenaMutator_Disco::IsRespawningAllowed() {
    return false;
}

void AFortAthenaMutator_Disco::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_Disco, LastRespawnableSafeZoneIndex);
}

AFortAthenaMutator_Disco::AFortAthenaMutator_Disco() {
    LastRespawnableSafeZoneIndex = 0;
    bRespawnWarningGiven = false;
    LastSafeZoneIndex = 0;
    TimeUntilPointAccrual = 1;
    SentDiscoOpenedMessagesIndex = 0;
}

