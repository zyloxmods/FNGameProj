#include "BuildingTrap.h"
#include "Components/SceneComponent.h"
#include "AthenaTrapAIPerceptionStimuliSourceComponent.h"
#include "Net/UnrealNetwork.h"

bool ABuildingTrap::UseAttachedToWhenTargeted() {
    return false;
}

bool ABuildingTrap::TriggerIfAppropriate() {
    return false;
}

void ABuildingTrap::SwitchToAlternateMaterial_Implementation() {
}

void ABuildingTrap::SpawnedFromItemDefinition(const UFortTrapItemDefinition* ItemDef, int32 InTrapLevel) {
}

void ABuildingTrap::SetTeamForMinigameStart() {
}

void ABuildingTrap::SetAttachedTo(ABuildingSMActor* ActorAttachedTo) {
}

void ABuildingTrap::ResetTrapLevel() {
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

int32 ABuildingTrap::GetNumberOfRemainingDelayedAttachingAttempts_Implementation() const {
    return 0;
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
    DOREPLIFETIME(ABuildingTrap, OriginalTrapLevel);
}

ABuildingTrap::ABuildingTrap() {
    TraceLocation = CreateDefaultSubobject<USceneComponent>(TEXT("Trace Location"));
    PlacementSkeletalMesh = NULL;
    TrapRangeMesh = NULL;
    TrapPreviewMesh = NULL;
    TrapData = NULL;
    bShouldAffectAllPawnsInMinigames = true;
    bTriggerAbilityOnEndoverlap = false;
    AbilitySet = NULL;
    DamageAttributeSet = NULL;
    AttachedTo = NULL;
    bTargetWithAttachedTo = true;
    LastAttachedTo = NULL;
    DelayBeforeDestroyAfterDurabilityExpired = 1;
    SavedDurabilityPct = 1;
    ObstructedTargetRecheckInterval = 1;
    ShouldTriggerTraceOffsets.AddDefaulted(1);
    bIgnoreBuildingObstructions = false;
    bOwnAllFacesOfAttachedToActor = false;
    AlternateMaterialInstance = NULL;
    StimSourceComponent = CreateDefaultSubobject<UAthenaTrapAIPerceptionStimuliSourceComponent>(TEXT("Trap AI Perception Stimuli Source Component"));
    TrapLevel = 0;
    OriginalTrapLevel = 0;
}

