#include "BuildingTrap.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

bool ABuildingTrap::UseAttachedToWhenTargeted() {
    return false;
}

bool ABuildingTrap::TriggerIfAppropriate() {
    return false;
}

void ABuildingTrap::SpawnedFromItemDefinition(const UFortTrapItemDefinition* ItemDef, int32 InTrapLevel) {
}

void ABuildingTrap::SetTeamForMinigameStart() {
}

void ABuildingTrap::SetAttachedTo(ABuildingSMActor* ActorAttachedTo) {
}

void ABuildingTrap::ResetTeamOnMinigameEnd() {
}

void ABuildingTrap::OnTriggerTouch(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ABuildingTrap::OnTriggerEndTouch(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ABuildingTrap::OnRep_ReplicatedAppliedAlterations() {
}

void ABuildingTrap::OnRep_AttachedTo() {
}











void ABuildingTrap::OnBlockingBuildingDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

bool ABuildingTrap::HasDurability() const {
    return false;
}

int32 ABuildingTrap::GetTrapRating() const {
    return 0;
}

int32 ABuildingTrap::GetTrapLevel() const {
    return 0;
}

TArray<AActor*> ABuildingTrap::GetTouchingDamageTargets(const FFortTargetFilter& Filter) const {
    return TArray<AActor*>();
}

float ABuildingTrap::GetReloadTime() {
    return 0.0f;
}

FGameplayTag ABuildingTrap::GetReloadBeginGameplayCueTag() const {
    return FGameplayTag{};
}

float ABuildingTrap::GetMaxDurability() const {
    return 0.0f;
}

float ABuildingTrap::GetFireDelay() const {
    return 0.0f;
}

float ABuildingTrap::GetDurabilityPercent() const {
    return 0.0f;
}

FGameplayTag ABuildingTrap::GetDelayBeginGameplayCueTag() const {
    return FGameplayTag{};
}

float ABuildingTrap::GetDamageDelay() const {
    return 0.0f;
}

FVector ABuildingTrap::GetCenter() {
    return FVector{};
}

ABuildingSMActor* ABuildingTrap::GetBuildingAttachedTo() const {
    return NULL;
}

float ABuildingTrap::GetArmTime() {
    return 0.0f;
}

TArray<UFortAlterationItemDefinition*> ABuildingTrap::GetAlterations() const {
    return TArray<UFortAlterationItemDefinition*>();
}

FGameplayTag ABuildingTrap::GetActivateTrapGameplayCueTag() const {
    return FGameplayTag{};
}

void ABuildingTrap::GameplayCue_Abilities_Activation_Traps(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters) {
}

void ABuildingTrap::FinishTrigger() {
}

bool ABuildingTrap::BP_ShouldTrigger_Implementation(const TArray<AActor*>& TouchingActors) const {
    return false;
}


void ABuildingTrap::AttemptRetrigger(float Seconds) {
}

void ABuildingTrap::AddTriggerComponent(UPrimitiveComponent* TriggerComponent) {
}

void ABuildingTrap::AddDamageComponent(UPrimitiveComponent* DamageComponent) {
}

void ABuildingTrap::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingTrap, TrapData);
    DOREPLIFETIME(ABuildingTrap, AppliedAlterations);
    DOREPLIFETIME(ABuildingTrap, AttachedTo);
    DOREPLIFETIME(ABuildingTrap, TrapLevel);
}

ABuildingTrap::ABuildingTrap() {
    this->TraceLocation = CreateDefaultSubobject<USceneComponent>(TEXT("Trace Location"));
    this->PlacementSkeletalMesh = NULL;
    this->TrapRangeMesh = NULL;
    this->TrapPreviewMesh = NULL;
    this->TrapData = NULL;
    this->bShouldAffectAllPawnsInMinigames = true;
    this->bTriggerAbilityOnEndoverlap = false;
    this->AbilitySet = NULL;
    this->DamageAttributeSet = NULL;
    this->AttachedTo = NULL;
    this->bTargetWithAttachedTo = true;
    this->LastAttachedTo = NULL;
    this->DelayBeforeDestroyAfterDurabilityExpired = 1.50f;
    this->SavedDurabilityPct = 1.00f;
    this->ObstructedTargetRecheckInterval = -1.00f;
    this->ShouldTriggerTraceOffsets.AddDefaulted(1);
    this->bIgnoreBuildingObstructions = false;
    this->TrapLevel = 0;
}

