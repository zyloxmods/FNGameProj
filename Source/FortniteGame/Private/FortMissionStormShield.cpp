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

void AFortMissionStormShield::OnRep_ReplicatedRadius() {
}

void AFortMissionStormShield::OnRep_RadiusGrowthData() {
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
    this->Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->ShieldRing = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Shield Ring"));
    this->MapWorldScale = 38.00f;
    this->ReplicatedRadius = -1.00f;
    this->UseGrowthRateDirectly = false;
    this->bAntiStormShield = false;
    this->RadiusToWorldScaleConversion = 0.02f;
    this->SafeAreaTemplate = NULL;
    this->StormShieldQuery = NULL;
    this->CurrentLocalRadius = -1.00f;
    this->StormMiniMapMaterial = NULL;
    this->StormMiniMapMaterialMID = NULL;
    this->StormMainMapMaterial = NULL;
    this->StormMainMapMaterialMID = NULL;
    this->bRegisterWithGameState = true;
    this->Level = 0;
    this->AutoHideRadius = 0.10f;
}

