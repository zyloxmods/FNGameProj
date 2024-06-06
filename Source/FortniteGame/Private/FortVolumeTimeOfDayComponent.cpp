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
    bUseEditorOverrideData = false;
    TimeOverride = 1;
    SpeedOverride = 1;
    bOverrideLightIntensity = false;
    LightIntensityOverride = 1;
    bOverrideLightColor = false;
    bOverrideFogDensity = false;
    FogDensityOverride = 1;
    bOverrideFogColor = false;
    bOverridePostProcess = false;
    PostProcessOverride = NULL;
    TimeOfDayManager = NULL;
    bIsOverridingTimeOfDay = false;
}

