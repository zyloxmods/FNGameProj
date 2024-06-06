#include "FortMissionStormShield.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

void AFortMissionStormShield::UpdateRadiusVisuals_Implementation() {
}

AFortMissionStormSafeZone* AFortMissionStormShield::SpawnSafeAreaAtLocation(const FVector& InLocation, const float InRadius) {
    return NULL;
}

void AFortMissionStormShield::SetTargetRadiusSizeChangeOverGrowthRate(const float InTargetRadius, const float InGrowthRate, bool bUseGrowthRateDirectly) {
}

void AFortMissionStormShield::SetTargetLocationToMoveTo(const FVector InTargetLocation, const float InMoveRate) {
}

void AFortMissionStormShield::SetRadiusOfShield(const float InRadius) {
}

bool AFortMissionStormShield::RemoveAndDestroySafeArea(AFortMissionStormSafeZone* AreaToRemove) {
    return false;
}

void AFortMissionStormShield::PauseStormShield() {
}

void AFortMissionStormShield::OnRep_ReplicatedRadius() {
}

void AFortMissionStormShield::OnRep_RadiusGrowthData() {
}

bool AFortMissionStormShield::IsInStormShield(FVector TestLocation) const {
    return false;
}

void AFortMissionStormShield::InitializeRadiusValue(const float InRadius) {
}

void AFortMissionStormShield::GetSafeZones(TArray<AFortMissionStormSafeZone*>& OutSafeZones) {
}

void AFortMissionStormShield::DestroyStormShield() {
}

void AFortMissionStormShield::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortMissionStormShield, ReplicatedRadius);
    DOREPLIFETIME(AFortMissionStormShield, RadiusGrowthData);
    DOREPLIFETIME(AFortMissionStormShield, MoveData);
    DOREPLIFETIME(AFortMissionStormShield, UseGrowthRateDirectly);
    DOREPLIFETIME(AFortMissionStormShield, bAntiStormShield);
    DOREPLIFETIME(AFortMissionStormShield, SafeAreas);
}

AFortMissionStormShield::AFortMissionStormShield() {
    Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    ShieldRing = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Shield Ring"));
    MapWorldScale = 1;
    ReplicatedRadius = 1;
    UseGrowthRateDirectly = false;
    bAntiStormShield = false;
    RadiusToWorldScaleConversion = 1;
    SafeAreaTemplate = NULL;
    StormShieldQuery = NULL;
    CurrentLocalRadius = 1;
    StormMiniMapMaterial = NULL;
    StormMiniMapMaterialMID = NULL;
    StormMainMapMaterial = NULL;
    StormMainMapMaterialMID = NULL;
    bRegisterWithGameState = true;
    Level = 0;
    AutoHideRadius = 1;
}

