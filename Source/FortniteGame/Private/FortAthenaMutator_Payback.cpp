#include "FortAthenaMutator_Payback.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_Payback::OnDeadStateChanged(AFortPlayerStateAthena* VictimPlayerState, bool bDead) {
}

void AFortAthenaMutator_Payback::NetMulticast_OnPaybackKill_Implementation(AFortPlayerStateAthena* KillerPlayerState, AFortPlayerStateAthena* VictimPlayerState) {
}

bool AFortAthenaMutator_Payback::IsMarkedForPaybackByTeam(const APlayerState* PlayerState, const uint8 Team) const {
    return false;
}

bool AFortAthenaMutator_Payback::IsMarkedForPayback(const APlayerState* PlayerState) const {
    return false;
}

void AFortAthenaMutator_Payback::GetTeamPlayersMarkedForPayback(TArray<AFortPlayerStateAthena*>& OutPlayerStates, const uint8 Team) const {
}

void AFortAthenaMutator_Payback::GetPlayersToPayBack(TArray<AFortPlayerStateAthena*>& OutPlayerStatesToPayBack, const APlayerState* AttackerPlayerState) const {
}

float AFortAthenaMutator_Payback::GetPaybackTimeRemaining(const APlayerState* KillerPlayerState, const uint8 VictimTeam) const {
    return 0.0f;
}

void AFortAthenaMutator_Payback::GetPaybackTeams(TArray<uint8>& OutTeams, const APlayerState* PlayerState) const {
}

float AFortAthenaMutator_Payback::GetHighestPaybackTimeRemaining(const APlayerState* KillerPlayerState) const {
    return 0.0f;
}

void AFortAthenaMutator_Payback::GetAllPlayersMarkedForPayback(TArray<AFortPlayerStateAthena*>& OutPlayerStates) const {
}

void AFortAthenaMutator_Payback::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_Payback, PaybackEffectDataArray);
}

AFortAthenaMutator_Payback::AFortAthenaMutator_Payback() {
    PaybackMarkerEffectClass = NULL;
}

