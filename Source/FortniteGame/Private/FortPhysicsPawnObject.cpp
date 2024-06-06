#include "FortPhysicsPawnObject.h"
#include "Components/StaticMeshComponent.h"
#include "FortDamageSet.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

void AFortPhysicsPawnObject::WakeUpOnGroundDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void AFortPhysicsPawnObject::WakeUp() {
}

void AFortPhysicsPawnObject::UpdateClientWithPhysicsObjectTestInput_Implementation(FVector LinearVelocity, FVector AngularVelocity) {
}

void AFortPhysicsPawnObject::TurnOffClientPrediction() {
}

AFortPhysicsPawnObject* AFortPhysicsPawnObject::SpawnPhysicsPawnObject(const UObject* WorldContextObject, TSubclassOf<AFortPhysicsPawnObject> ActorClass, const FTransform& Transform, const FPhysicsPawnObjectInitialParameters& NewInitialParameters) {
    return NULL;
}

void AFortPhysicsPawnObject::SetPropDestructionParams(TArray<TSubclassOf<ABuildingActor>> InBuildingPropClassesPhysicsObjectCanDestroy, TArray<UBuildingEditModeMetadata*> InWallsPhysicsObjectCanDestroy) {
}

void AFortPhysicsPawnObject::SetImpulseResponseZBias(const float ZBias) {
}

void AFortPhysicsPawnObject::SetImpulseResponseMultiplier(const float Multiplier) {
}

void AFortPhysicsPawnObject::SetHealthPercent(float Percent) {
}

void AFortPhysicsPawnObject::SetDyingPhysics() {
}

void AFortPhysicsPawnObject::ServerBroadcastHitFromClient_Implementation(APlayerController* HittingController, APawn* HittingPawn, const FVector& VelocityOfHitter, const FVector& HitNormal, const FTimeStampedPhysicsPawnState& ClientBallState) {
}

void AFortPhysicsPawnObject::ServerBroadcastHit_Implementation(APawn* ImpulseInstigator, const FVector ImpactPoint, const FVector ImpulseValue) {
}

void AFortPhysicsPawnObject::SendClientStateToServer_Helper() {
}





void AFortPhysicsPawnObject::OnRep_SurfaceTypePhysicsObjectOn(TEnumAsByte<EPhysicalSurface> PreviousSurfaceOn) {
}

void AFortPhysicsPawnObject::OnRep_PendingDeath() {
}

void AFortPhysicsPawnObject::OnRep_LastServerConfirmedHit() {
}

void AFortPhysicsPawnObject::OnRep_InitialParameters() {
}

void AFortPhysicsPawnObject::OnRep_HealthSet() {
}

void AFortPhysicsPawnObject::OnRep_CurrentServerPhysicsState() {
}

void AFortPhysicsPawnObject::OnRep_CorrectTargetOrientation() {
}

void AFortPhysicsPawnObject::OnRep_AbilitySystemComponent() {
}

void AFortPhysicsPawnObject::OnPxComponentWake(UPrimitiveComponent* WakingComponent, FName BoneName) {
}










float AFortPhysicsPawnObject::ModifyIncomingDamage(float Damage, const FGameplayTagContainer& InTags, const FGameplayEffectContextHandle& EffectContext, AController* EventInstigator, AActor* DamageCauser) {
    return 0.0f;
}

bool AFortPhysicsPawnObject::IsScrapingSidesOrTop() const {
    return false;
}

bool AFortPhysicsPawnObject::IsInWater() const {
    return false;
}

bool AFortPhysicsPawnObject::IsInAir() const {
    return false;
}

bool AFortPhysicsPawnObject::IsCorrectingOrientation() const {
    return false;
}

bool AFortPhysicsPawnObject::IsAsleep() const {
    return false;
}

bool AFortPhysicsPawnObject::HasPermissionToAlterBuildings() const {
    return false;
}

FVector AFortPhysicsPawnObject::GetPreviousLinearVelocity() const {
    return FVector{};
}

FVector AFortPhysicsPawnObject::GetPreviousLinearAcceleration() const {
    return FVector{};
}

float AFortPhysicsPawnObject::GetPreviousForwardSpeedKmh() const {
    return 0.0f;
}

FVector AFortPhysicsPawnObject::GetPhysicsObjectVelocity() const {
    return FVector{};
}

float AFortPhysicsPawnObject::GetMaxHealth() const {
    return 0.0f;
}

float AFortPhysicsPawnObject::GetHealth() const {
    return 0.0f;
}

float AFortPhysicsPawnObject::GetForwardSpeedKmh() const {
    return 0.0f;
}

FString AFortPhysicsPawnObject::GetDisplayName() const {
    return TEXT("");
}

void AFortPhysicsPawnObject::GameplayCue_Damage(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters) {
}

void AFortPhysicsPawnObject::DrawServerAndClientBallPosition_Implementation(const FVector ServerPosition) {
}

void AFortPhysicsPawnObject::DestroyPhysicsObject() {
}

void AFortPhysicsPawnObject::DebugDrawImpactBucket_Implementation(FVector Location, FVector ImpactVector, FColor Color) {
}

bool AFortPhysicsPawnObject::CanTeleport() const {
    return false;
}

bool AFortPhysicsPawnObject::CanCorrectOrientation(AFortPawn* FP) const {
    return false;
}

void AFortPhysicsPawnObject::ApplyPredictedImpulseFromPawnHitClient(const FVector& VelocityOfHitter, const FVector& NormalTowardObject, APawn* HittingPawn) {
}

void AFortPhysicsPawnObject::ApplyImpulseFromPawnHit(const FVector& VelocityOfHitter, const FVector& NormalTowardObject, APawn* HittingPawn) {
}

void AFortPhysicsPawnObject::ApplyImpulse(AActor* ImpulseInstigator, const FVector& ImpulseToApply) {
}

void AFortPhysicsPawnObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPhysicsPawnObject, CorrectTargetOrientation);
    DOREPLIFETIME(AFortPhysicsPawnObject, AbilitySystemComponent);
    DOREPLIFETIME(AFortPhysicsPawnObject, HealthSet);
    DOREPLIFETIME(AFortPhysicsPawnObject, bPendingDeath);
    DOREPLIFETIME(AFortPhysicsPawnObject, SurfaceTypePhysicsObjectOn);
    DOREPLIFETIME(AFortPhysicsPawnObject, CurrentServerPhysicsState);
    DOREPLIFETIME(AFortPhysicsPawnObject, LastServerConfirmedHit);
    DOREPLIFETIME(AFortPhysicsPawnObject, InitialParameters);
}

AFortPhysicsPawnObject::AFortPhysicsPawnObject() {
    PhysicsMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PhysicsMeshComponent"));
    VisibleMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisibleMeshComponent"));
    PrimarySurfaceType = SurfaceType_Default;
    WeaponResponseType = EFortBaseWeaponDamage::Combat;
    bShowDamageNumbers = true;
    bPlayDamageAudio = false;
    ImpulseResponseMultiplier = 1;
    ImpulseResponseZBias = 1;
    CachedSpeed = 1;
    DefaultHitNotifyAudioBank = NULL;
    LifespanAfterDeath = 1;
    bPlayedDying = false;
    LastDamagedTime = 1;
    PlayerCollisionGameplayEffect = NULL;
    AbilitySystemComponent = NULL;
    HealthSet = NULL;
    ImpulseResponseSet = NULL;
    DamageSet = CreateDefaultSubobject<UFortDamageSet>(TEXT("DamageSet"));
    HealthBarIndicator = NULL;
    bPendingDeath = false;
    SurfaceTypePhysicsObjectOn = SurfaceType_Default;
    StartupAbilitySet = NULL;
}

