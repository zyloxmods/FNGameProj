#include "ArgonPlayerComponent.h"
#include "Net/UnrealNetwork.h"

void UArgonPlayerComponent::PlayFinishedRaceEmote() {
}

void UArgonPlayerComponent::OnRep_RotatePawnToCamera() {
}

void UArgonPlayerComponent::OnRep_EntireSquadDiedServerTimeForRespawn() {
}

void UArgonPlayerComponent::OnRep_ArgonMutator() {
}

void UArgonPlayerComponent::OnRacePhaseChanged(EArgonRacePhase NewRacePhase) {
}

void UArgonPlayerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UArgonPlayerComponent, EntireSquadDiedServerTimeForRespawn);
    DOREPLIFETIME(UArgonPlayerComponent, bRotatePawnToCamera);
    DOREPLIFETIME(UArgonPlayerComponent, ArgonMutator);
}

UArgonPlayerComponent::UArgonPlayerComponent() {
    this->EntireSquadDiedServerTimeForRespawn = 1;
    this->bRotatePawnToCamera = true;
    this->CachedFinishedRaceEmote = NULL;
    this->ArgonMutator = NULL;
}

