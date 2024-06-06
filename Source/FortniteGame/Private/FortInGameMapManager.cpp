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
    bClearAllFog = false;
    MapLayerSize = 0;
    SceneCaptureClass = NULL;
    SceneCaptureBlurryClass = NULL;
    MapMaterial = NULL;
    MapMaterialMID = NULL;
    MapOpacityWhenWalking = 1;
    OffsetZ = 1;
    IconVisibilityFogThreshold = 0;
    DelayBetweenDispersions = 1;
    ExploredRadius = 1;
    ExploredFalloffRadius = 1;
    SeenRadius = 1;
    SeenFalloffRadius = 1;
    VisibilityMaxGradient = 0;
    UnexploredOpacity = 0;
    MaxPercentageMapExplored = 1;
    MapExplorationThresholdPercentage = 1;
    LastMapExplorationThresholdPercentageReached = 1;
    MapCaptureMethod = EMapCaptureMethod::None;
    SceneCapture = NULL;
    SceneCaptureBlurry = NULL;
    FogMask = NULL;
    HeatmapMask = NULL;
    MapWorldScale = 1;
    MobileMapLocationFontSizeOverride = 0;
}

