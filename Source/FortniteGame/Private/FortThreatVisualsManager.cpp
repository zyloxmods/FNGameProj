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
    this->CloudBlueprint = NULL;
    this->CloudRadius = 1;
    this->ThreatBoxVolumeTopPadding = 1;
    this->ThreatBoxVolumeBottomPadding = 1;
    this->bUseLocalPlayersOnlyForCloudMinimumHeight = true;
    this->bHideClouds = false;
    this->CloudMinimumHeightAbovePlayers = 1;
    this->CloudMinimumHeightAboveGround = 1;
    this->CloudMinimumAltitude = 1;
    this->CloudMaxVerticalDelta = 1;
    this->CloudMinSpeed = 1;
    this->CloudMaxSpeed = 1;
    this->StormWindCloudRadius = 1;
    this->StormWindGoalRadius = 1;
    this->StormWindFalloffRadius = 1;
    this->StormWindInactiveMagnitude = 1;
    this->StormWindActiveMagnitude = 1;
    this->StormWindDesiredDeltaBlendTime = 1;
    this->StormWindDirectionAdditionalAngle = 1;
}

