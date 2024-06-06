#include "FortThreatVisualsManager.h"
#include "Net/UnrealNetwork.h"

bool AFortThreatVisualsManager::StormsExist() const {
    return false;
}

void AFortThreatVisualsManager::SetMinimumCloudAltitude(float NewMinimumAltitude) {
}

void AFortThreatVisualsManager::SetCloudsAreHidden(bool bHide) {
}

void AFortThreatVisualsManager::ResetMinimumCloudAltitude() {
}



void AFortThreatVisualsManager::OnRep_ThreatLocations() {
}

void AFortThreatVisualsManager::OnRep_StormWinds() {
}

void AFortThreatVisualsManager::OnRep_HideClouds() {
}

void AFortThreatVisualsManager::OnRep_GoalActorLocations() {
}


TArray<FThreatLocationInfo> AFortThreatVisualsManager::GetThreatClouds() const {
    return TArray<FThreatLocationInfo>();
}

AThreatCloud* AFortThreatVisualsManager::GetThreatCloud(const FThreatLocationInfo& ThreatLocInfo) const {
    return NULL;
}

bool AFortThreatVisualsManager::GetCloudsAreHidden() const {
    return false;
}

void AFortThreatVisualsManager::BeginThreatVisualsPrecursor_Implementation(AActor* SourceActor, FVector ThreatLocation) {
}

void AFortThreatVisualsManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortThreatVisualsManager, bHideClouds);
    DOREPLIFETIME(AFortThreatVisualsManager, ThreatLocations);
    DOREPLIFETIME(AFortThreatVisualsManager, StormWindArray);
    DOREPLIFETIME(AFortThreatVisualsManager, GoalActorLocations);
}

AFortThreatVisualsManager::AFortThreatVisualsManager() {
    CloudBlueprint = NULL;
    CloudRadius = 1;
    ThreatBoxVolumeTopPadding = 1;
    ThreatBoxVolumeBottomPadding = 1;
    bUseLocalPlayersOnlyForCloudMinimumHeight = true;
    bHideClouds = false;
    CloudMinimumHeightAbovePlayers = 1;
    CloudMinimumHeightAboveGround = 1;
    CloudMinimumAltitude = 1;
    CloudMaxVerticalDelta = 1;
    CloudMinSpeed = 1;
    CloudMaxSpeed = 1;
    StormWindCloudRadius = 1;
    StormWindGoalRadius = 1;
    StormWindFalloffRadius = 1;
    StormWindInactiveMagnitude = 1;
    StormWindActiveMagnitude = 1;
    StormWindDesiredDeltaBlendTime = 1;
    StormWindDirectionAdditionalAngle = 1;
}

