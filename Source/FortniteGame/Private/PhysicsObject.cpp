#include "PhysicsObject.h"
#include "Components/StaticMeshComponent.h"
#include "FortDamageSet.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

void APhysicsObject::WakeUpOnGroundDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void APhysicsObject::WakeUp() {
}

void APhysicsObject::UpdateClientWithPhysicsObjectTestInput_Implementation(FVector LinearVelocity, FVector AngularVelocity) {
}

void APhysicsObject::TurnOffClientPrediction() {
}

APhysicsObject* APhysicsObject::SpawnPhysicsObject(const UObject* WorldContextObject, TSubclassOf<APhysicsObject> ActorClass, const FTransform& Transform, const FPhysicsObjectInitialParameters& NewInitialParameters) {
    return NULL;
}

void APhysicsObject::SetPropDestructionParams(TArray<TSubclassOf<ABuildingActor>> InBuildingPropClassesPhysicsObjectCanDestroy, TArray<UBuildingEditModeMetadata*> InWallsPhysicsObjectCanDestroy) {
}

void APhysicsObject::SetImpulseResponseZBias(const float ZBias) {
}

void APhysicsObject::SetImpulseResponseMultiplier(const float Multiplier) {
}

void APhysicsObject::SetHealthPercent(float Percent) {
}

void APhysicsObject::SetDyingPhysics() {
}

void APhysicsObject::SendClientStateToServer_Helper() {
}





void APhysicsObject::OnRep_SurfaceTypePhysicsObjectOn(TEnumAsByte<EPhysicalSurface> PreviousSurfaceOn) {
}

void APhysicsObject::OnRep_PendingDeath() {
}

void APhysicsObject::OnRep_LastServerConfirmedHit() {
}

void APhysicsObject::OnRep_InitialParameters() {
}

void APhysicsObject::OnRep_HealthSet() {
}

void APhysicsObject::OnRep_CurrentServerPhysicsState() {
}

void APhysicsObject::OnRep_CorrectTargetOrientation() {
}

void APhysicsObject::OnRep_AbilitySystemComponent() {
}

void APhysicsObject::OnPxComponentWake(UPrimitiveComponent* WakingComponent, FName BoneName) {
}










float APhysicsObject::ModifyIncomingDamage(float Damage, const FGameplayTagContainer& InTags, const FGameplayEffectContextHandle& EffectContext, AController* EventInstigator, AActor* DamageCauser) {
    return 0.0f;
}

bool APhysicsObject::IsScrapingSidesOrTop() const {
    return false;
}

bool APhysicsObject::IsInWater() const {
    return false;
}

bool APhysicsObject::IsInAir() const {
    return false;
}

bool APhysicsObject::IsCorrectingOrientation() const {
    return false;
}

bool APhysicsObject::IsAsleep() const {
    return false;
}

bool APhysicsObject::HasPermissionToAlterBuildings() const {
    return false;
}

FVector APhysicsObject::GetPreviousLinearVelocity() const {
    return FVector{};
}

FVector APhysicsObject::GetPreviousLinearAcceleration() const {
    return FVector{};
}

float APhysicsObject::GetPreviousForwardSpeedKmh() const {
    return 0.0f;
}

FVector APhysicsObject::GetPhysicsObjectVelocity() const {
    return FVector{};
}

float APhysicsObject::GetMaxHealth() const {
    return 0.0f;
}

float APhysicsObject::GetHealth() const {
    return 0.0f;
}

float APhysicsObject::GetForwardSpeedKmh() const {
    return 0.0f;
}

FString APhysicsObject::GetDisplayName() const {
    return TEXT("");
}

void APhysicsObject::GameplayCue_Damage(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters) {
}

void APhysicsObject::DrawServerAndClientBallPosition_Implementation(const FVector ServerPosition) {
}

void APhysicsObject::DestroyPhysicsObject() {
}

void APhysicsObject::DebugDrawImpactBucket_Implementation(FVector Location, FVector ImpactVector, FColor Color) {
}

bool APhysicsObject::CanTeleport() const {
    return false;
}

bool APhysicsObject::CanCorrectOrientation(AFortPawn* FP) const {
    return false;
}

void APhysicsObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APhysicsObject, CorrectTargetOrientation);
    DOREPLIFETIME(APhysicsObject, AbilitySystemComponent);
    DOREPLIFETIME(APhysicsObject, HealthSet);
    DOREPLIFETIME(APhysicsObject, bPendingDeath);
    DOREPLIFETIME(APhysicsObject, SurfaceTypePhysicsObjectOn);
    DOREPLIFETIME(APhysicsObject, CurrentServerPhysicsState);
    DOREPLIFETIME(APhysicsObject, LastServerConfirmedHit);
    DOREPLIFETIME(APhysicsObject, InitialParameters);
}

APhysicsObject::APhysicsObject() {
    this->PhysicsMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PhysicsMeshComponent"));
    this->VisibleMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisibleMeshComponent"));
    this->PrimarySurfaceType = SurfaceType_Default;
    this->WeaponResponseType = EFortBaseWeaponDamage::Combat;
    this->bShowDamageNumbers = true;
    this->bPlayDamageAudio = false;
    this->ImpulseResponseMultiplier = 1.00f;
    this->ImpulseResponseZBias = 0.10f;
    this->CachedSpeed = 0.00f;
    this->DefaultHitNotifyAudioBank = NULL;
    this->LifespanAfterDeath = 0.50f;
    this->bPlayedDying = false;
    this->LastDamagedTime = 0.00f;
    this->PlayerCollisionGameplayEffect = NULL;
    this->AbilitySystemComponent = NULL;
    this->HealthSet = NULL;
    this->ImpulseResponseSet = NULL;
    this->DamageSet = CreateDefaultSubobject<UFortDamageSet>(TEXT("DamageSet"));
    this->HealthBarIndicator = NULL;
    this->bPendingDeath = false;
    this->SurfaceTypePhysicsObjectOn = SurfaceType_Default;
    this->StartupAbilitySet = NULL;
}

