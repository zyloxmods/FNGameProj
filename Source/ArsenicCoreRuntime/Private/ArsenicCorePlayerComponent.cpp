#include "ArsenicCorePlayerComponent.h"
#include "Net/UnrealNetwork.h"

void UArsenicCorePlayerComponent::UpdateGhostVisibilityChange(const bool bIsVisibile) {
}

void UArsenicCorePlayerComponent::SetSquadMemberArsenicCorePlayerStatus(const AFortPlayerStateAthena* PlayerState, EArsenicCorePlayerStatus NewPlayerStatus) {
}

void UArsenicCorePlayerComponent::ServerClientIsReadyToSpawnAsGhost_Implementation() {
}
bool UArsenicCorePlayerComponent::ServerClientIsReadyToSpawnAsGhost_Validate() {
    return true;
}

void UArsenicCorePlayerComponent::OnRep_SquadMemberPlayerStatuses(const TArray<FArsenicCoreSquadMemberPlayerStatus>& OldValue) {
}

void UArsenicCorePlayerComponent::OnRep_ScreamFoundNoSurvivors() {
}

void UArsenicCorePlayerComponent::OnRep_ManagingMutator() {
}

void UArsenicCorePlayerComponent::OnRep_CurrentPlayerStatus() {
}

void UArsenicCorePlayerComponent::GhostScreamFoundNoSurvivors() {
}

void UArsenicCorePlayerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UArsenicCorePlayerComponent, ManagingMutator);
    DOREPLIFETIME(UArsenicCorePlayerComponent, CurrentPlayerStatus);
    DOREPLIFETIME(UArsenicCorePlayerComponent, ScreamFoundNoSurvivors);
    DOREPLIFETIME(UArsenicCorePlayerComponent, SquadMemberPlayerStatuses);
}

UArsenicCorePlayerComponent::UArsenicCorePlayerComponent() {
    this->ManagingMutator = NULL;
    this->LocalRespawnDrone = NULL;
    this->CurrentPlayerStatus = EArsenicCorePlayerStatus::None;
    this->ScreamFoundNoSurvivors = 0;
}

