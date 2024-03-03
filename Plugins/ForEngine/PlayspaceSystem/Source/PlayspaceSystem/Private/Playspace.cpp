#include "Playspace.h"
#include "Net/UnrealNetwork.h"

void APlayspace::OnRep_PlayspaceUsers() {
}

void APlayspace::OnRep_MatchStartTime() {
}

void APlayspace::OnRep_bMatchHasEnded() {
}

void APlayspace::OnRep_bIsInitialized() {
}

void APlayspace::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APlayspace, PlayspaceUsers);
    DOREPLIFETIME(APlayspace, ChildPlayspaces);
    DOREPLIFETIME(APlayspace, bIsInitialized);
    DOREPLIFETIME(APlayspace, bMatchHasEnded);
    DOREPLIFETIME(APlayspace, MatchStartTime);
}

APlayspace::APlayspace() {
    this->bAutoStartMatchOnServerStart = true;
    this->PlayspaceManagerCached = NULL;
    this->BoundGameplayVolume = NULL;
    this->bIsInitialized = false;
    this->bMatchHasEnded = false;
    this->MatchStartTime = 1;
}

