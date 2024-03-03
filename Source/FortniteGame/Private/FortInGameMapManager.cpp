#include "FortInGameMapManager.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

bool AFortInGameMapManager::ShouldShowMainMap() {
    return false;
}

void AFortInGameMapManager::SetCaptureLocation(const FVector& Location) {
}

void AFortInGameMapManager::SetActorBoundaryData(float UpperZ, float LowerZ, const TArray<TSubclassOf<AActor>>& ClassesToHide) {
}

void AFortInGameMapManager::ServerClearAllFog() {
}

void AFortInGameMapManager::ResetCaptureLocation() {
}

void AFortInGameMapManager::PaintOnFog(const FVector& WorldCoords, TEnumAsByte<EFortTeam::Type> Team) {
}

void AFortInGameMapManager::OnRep_MapData() {
}

void AFortInGameMapManager::OnRep_ClearAllFog() {
}

bool AFortInGameMapManager::GetStaticCaptureSetupComplete() {
    return false;
}

float AFortInGameMapManager::GetHeatmapMaskScale() const {
    return 0.0f;
}

UTexture2D* AFortInGameMapManager::GetHeatmapMask() const {
    return NULL;
}

AFortInGameMapManager* AFortInGameMapManager::GetCurrent(const UObject* WorldContextObject) {
    return NULL;
}

void AFortInGameMapManager::BroadcastExplorationEvents_Implementation(const TArray<FTeamMapExplorationEvent>& Events) {
}

FVector2D AFortInGameMapManager::BPWorldLocationToMapLocation(const FVector& WorldLocation, float InMapSize) {
    return FVector2D{};
}

void AFortInGameMapManager::AllowShowMiniMap(bool bAllowShow) {
}

void AFortInGameMapManager::AllowShowMainMap(bool bAllowShow) {
}

void AFortInGameMapManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortInGameMapManager, MapData);
    DOREPLIFETIME(AFortInGameMapManager, bClearAllFog);
}

AFortInGameMapManager::AFortInGameMapManager() {
    this->bClearAllFog = false;
    this->MapLayerSize = 0;
    this->SceneCaptureClass = NULL;
    this->SceneCaptureBlurryClass = NULL;
    this->MapMaterial = NULL;
    this->MapMaterialMID = NULL;
    this->MapOpacityWhenWalking = 1;
    this->OffsetZ = 1;
    this->IconVisibilityFogThreshold = 0;
    this->DelayBetweenDispersions = 1;
    this->ExploredRadius = 1;
    this->ExploredFalloffRadius = 1;
    this->SeenRadius = 1;
    this->SeenFalloffRadius = 1;
    this->VisibilityMaxGradient = 0;
    this->UnexploredOpacity = 0;
    this->MaxPercentageMapExplored = 1;
    this->MapExplorationThresholdPercentage = 1;
    this->LastMapExplorationThresholdPercentageReached = 1;
    this->MapCaptureMethod = EMapCaptureMethod::None;
    this->SceneCapture = NULL;
    this->SceneCaptureBlurry = NULL;
    this->FogMask = NULL;
    this->HeatmapMask = NULL;
    this->MapWorldScale = 1;
    this->MobileMapLocationFontSizeOverride = 0;
}

