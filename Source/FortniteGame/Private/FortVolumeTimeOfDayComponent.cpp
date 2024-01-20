#include "FortVolumeTimeOfDayComponent.h"
#include "Net/UnrealNetwork.h"

void UFortVolumeTimeOfDayComponent::ReplayFollowedPlayerChanged(AFortPlayerControllerSpectating* SpectatorPC, AFortPlayerState* NewFollowedPlayer) {
}

void UFortVolumeTimeOfDayComponent::OnRep_TimeOfDayManager() {
}

void UFortVolumeTimeOfDayComponent::OnRep_TimeOfDayConfig() {
}

void UFortVolumeTimeOfDayComponent::MutatorSettingsChanged(const FPropertyOverrideData& OverrideData) {
}

void UFortVolumeTimeOfDayComponent::ClientExitedVolume(APlayerState* PlayerState, AFortVolume* FortVolume) {
}

void UFortVolumeTimeOfDayComponent::ClientEnteredVolume(APlayerState* PlayerState, AFortVolume* FortVolume) {
}

void UFortVolumeTimeOfDayComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortVolumeTimeOfDayComponent, TimeOfDayManager);
    DOREPLIFETIME(UFortVolumeTimeOfDayComponent, TimeOfDayConfig);
}

UFortVolumeTimeOfDayComponent::UFortVolumeTimeOfDayComponent() {
    this->TimeOfDayManager = NULL;
    this->bIsOverridingTimeOfDay = false;
}

