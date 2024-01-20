#include "FortInGameMapManager.h"
#include "Net/UnrealNetwork.h"

void AFortInGameMapManager::PaintOnFog(const FVector& WorldCoords, TEnumAsByte<EFortTeam::Type> Team) {
}

void AFortInGameMapManager::OnRep_MapData() {
}

AFortInGameMapManager* AFortInGameMapManager::GetCurrent(const UObject* WorldContextObject) {
    return NULL;
}

void AFortInGameMapManager::BroadcastExplorationEvents_Implementation(const TArray<FTeamMapExplorationEvent>& Events) {
}

void AFortInGameMapManager::AllowShowMiniMap(bool bAllowShow) {
}

void AFortInGameMapManager::AllowShowMainMap(bool bAllowShow) {
}

void AFortInGameMapManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortInGameMapManager, MapData);
}

AFortInGameMapManager::AFortInGameMapManager() {
    this->DelayBetweenDispersions = 0.10f;
    this->ExploredRadius = 0.01f;
    this->ExploredFalloffRadius = 0.01f;
    this->SeenRadius = 0.01f;
    this->SeenFalloffRadius = 0.18f;
    this->VisibilityMaxGradient = 128;
    this->UnexploredOpacity = 128;
    this->OffsetZ = 17000.00f;
    this->MapLayerSize = 896;
    this->FullscreenMapZoom = 1.00f;
    this->IconVisibilityFogThreshold = 96;
    this->SceneCaptureClass = NULL;
    this->SceneCaptureBlurryClass = NULL;
    this->MapMaterial = NULL;
    this->MapOpacityWhenWalking = 0.83f;
    this->MaxPercentageMapExplored = 0.95f;
    this->MapExplorationThresholdPercentage = 0.25f;
    this->LastMapExplorationThresholdPercentageReached = 0.00f;
    this->MapCaptureMethod = EMapCaptureMethod::LiveCapture;
    this->SceneCapture = NULL;
    this->SceneCaptureBlurry = NULL;
    this->FogMask = NULL;
    this->MapWorldScale = 0.00f;
}

