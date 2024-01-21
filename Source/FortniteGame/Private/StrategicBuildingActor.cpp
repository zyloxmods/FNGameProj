#include "StrategicBuildingActor.h"
#include "Components/BoxComponent.h"
#include "Net/UnrealNetwork.h"

void AStrategicBuildingActor::SetupVisibilityComponent() {
}

void AStrategicBuildingActor::SetupIndicators() {
}

void AStrategicBuildingActor::ProcessDeferredTouchActors() {
}

void AStrategicBuildingActor::OnRep_ConstructionProgress() {
}

void AStrategicBuildingActor::OnRep_bIsActive() {
}

void AStrategicBuildingActor::OnConstructionTickPlayEffects_Implementation(float DeltaTime, float ElapsedPct, int32 ConstructionLvl) {
}

void AStrategicBuildingActor::OnConstructionStartedPlayEffects_Implementation(float ServerStartTime, float ServerEndTime, float CurrentServerTime, float ElapsedPct, int32 ConstructionLvl) {
}

void AStrategicBuildingActor::OnConstructionEndedPlayEffects_Implementation(int32 ConstructionLevel) {
}

void AStrategicBuildingActor::OnActiveStatusChanged_Implementation(bool bNewActiveStatus) {
}

bool AStrategicBuildingActor::IsActive() const {
    return false;
}

void AStrategicBuildingActor::GiveItemFromStrategicBuildingToPlayer(AFortPlayerController* PlayerController, const UFortWorldItemDefinition* ItemDefinition, int32 NumberToGive) {
}

float AStrategicBuildingActor::GetMaxLevelUnlockProgress(int32 InLevel) const {
    return 0.0f;
}

FVector AStrategicBuildingActor::GetDeathEffectsScale_Implementation() const {
    return FVector{};
}

FRotator AStrategicBuildingActor::GetDeathEffectsRotation_Implementation() const {
    return FRotator{};
}

FVector AStrategicBuildingActor::GetDeathEffectsLocation_Implementation() const {
    return FVector{};
}

float AStrategicBuildingActor::GetCurrentLevelUnlockProgress(int32 InLevel) const {
    return 0.0f;
}

bool AStrategicBuildingActor::AttemptIncrementLevelUnlockProgress(int32 InLevel, float InProgressDelta) {
    return false;
}

void AStrategicBuildingActor::ApplyProximityPulseEffects() {
}

void AStrategicBuildingActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AStrategicBuildingActor, ConstructionProgress);
    DOREPLIFETIME(AStrategicBuildingActor, LevelProgress);
    DOREPLIFETIME(AStrategicBuildingActor, bIsActive);
}

AStrategicBuildingActor::AStrategicBuildingActor() {
    this->HealthBarVisibilityDistance = 2048.00f;
    this->HealthBarVisibilityDistanceSquared = 4194304.00f;
    this->TouchBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("TouchBoxComp0"));
    this->StrategicBuildingCategory = EFortStrategicBuildingCategory::Defensive;
    this->LevelInfo.AddDefaulted(3);
    this->ProximityPulseInterval = 0.50f;
    this->DeathPenaltyAbility = NULL;
    this->DeathParticles = NULL;
    this->DeathSound = NULL;
    this->SpawnedFromItemDefinition = NULL;
    this->bIsActive = false;
    this->bHasGEsToApplyOnTouch = false;
    this->bHasGEsToApplyOnPulseTimer = false;
    this->VisibilityComponent = NULL;
    this->MiniMapIcon = NULL;
}

