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
    this->CloudRadius = 2048.00f;
    this->ThreatBoxVolumeTopPadding = 576.00f;
    this->ThreatBoxVolumeBottomPadding = 192.00f;
    this->bUseLocalPlayersOnlyForCloudMinimumHeight = true;
    this->bHideClouds = false;
    this->CloudMinimumHeightAbovePlayers = 2048.00f;
    this->CloudMinimumHeightAboveGround = 2048.00f;
    this->CloudMinimumAltitude = -23040.00f;
    this->CloudMaxVerticalDelta = 1000.00f;
    this->CloudMinSpeed = 50.00f;
    this->CloudMaxSpeed = 500.00f;
    this->StormWindCloudRadius = 4096.00f;
    this->StormWindGoalRadius = 2304.00f;
    this->StormWindFalloffRadius = 1024.00f;
    this->StormWindInactiveMagnitude = 0.49f;
    this->StormWindActiveMagnitude = 1.00f;
    this->StormWindDesiredDeltaBlendTime = 10.00f;
    this->StormWindDirectionAdditionalAngle = 12.50f;
}

