#include "FortVolumeTimeOfDayComponent.h"
#include "Net/UnrealNetwork.h"

void UFortVolumeTimeOfDayComponent::SpectatorFollowedPlayerChanged(AFortPlayerControllerSpectating* SpectatorPC, AFortPlayerState* NewFollowedPlayer) {
}

void UFortVolumeTimeOfDayComponent::OnRep_TimeOfDayManager() {
}

void UFortVolumeTimeOfDayComponent::OnRep_TimeOfDayConfig() {
}

void UFortVolumeTimeOfDayComponent::MutatorSettingsChanged(const FPropertyOverrideData& OverrideData) {
}

void UFortVolumeTimeOfDayComponent::CreateLocalTimeOfDayManager() {
}

void UFortVolumeTimeOfDayComponent::ClientExitedVolume(APlayerState* PlayerState, AFortVolume* FortVolume) {
}

void UFortVolumeTimeOfDayComponent::ClientEnteredVolume(APlayerState* PlayerState, AFortVolume* FortVolume) {
}

void UFortVolumeTimeOfDayComponent::BindToVolumeMangerClientEnterExit() {
}

void UFortVolumeTimeOfDayComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortVolumeTimeOfDayComponent, TimeOfDayManager);
    DOREPLIFETIME(UFortVolumeTimeOfDayComponent, TimeOfDayConfig);
}

UFortVolumeTimeOfDayComponent::UFortVolumeTimeOfDayComponent() {
    this->bUseEditorOverrideData = false;
    this->TimeOverride = 1;
    this->SpeedOverride = 1;
    this->bOverrideLightIntensity = false;
    this->LightIntensityOverride = 1;
    this->bOverrideLightColor = false;
    this->bOverrideFogDensity = false;
    this->FogDensityOverride = 1;
    this->bOverrideFogColor = false;
    this->bOverridePostProcess = false;
    this->PostProcessOverride = NULL;
    this->TimeOfDayManager = NULL;
    this->bIsOverridingTimeOfDay = false;
}

