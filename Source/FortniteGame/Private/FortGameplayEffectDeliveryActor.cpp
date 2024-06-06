#include "FortGameplayEffectDeliveryActor.h"
#include "Net/UnrealNetwork.h"

void AFortGameplayEffectDeliveryActor::SetNoiseMakingInstigatorOverride(AActor* NewActor) {
}

void AFortGameplayEffectDeliveryActor::SetIgnoreInstigatorCollision(bool bShouldIgnore) {
}

void AFortGameplayEffectDeliveryActor::SetCollisionComponent(UPrimitiveComponent* NewCollisionComponent) {
}


void AFortGameplayEffectDeliveryActor::OnRep_IsBeingKilled() {
}

void AFortGameplayEffectDeliveryActor::OnRep_HasExplodedReplay() {
}


void AFortGameplayEffectDeliveryActor::OnComponentTouch(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AFortGameplayEffectDeliveryActor::OnComponentOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AFortGameplayEffectDeliveryActor::OnComponentEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AFortGameplayEffectDeliveryActor::KillTimerExpired() {
}

void AFortGameplayEffectDeliveryActor::Kill() {
}

bool AFortGameplayEffectDeliveryActor::IsBeingKilled() const {
    return false;
}

UPrimitiveComponent* AFortGameplayEffectDeliveryActor::GetCollisionComponent() const {
    return NULL;
}

void AFortGameplayEffectDeliveryActor::DoSingleActorHit(const FHitResult& Hit, const bool bBroadcastHit) {
}

void AFortGameplayEffectDeliveryActor::DoExplosionAtLocation(const FVector& ExplosionLocation) {
}

void AFortGameplayEffectDeliveryActor::DoExplosion() {
}

void AFortGameplayEffectDeliveryActor::ChangeInstigator(APawn* NewInstigator) {
}

void AFortGameplayEffectDeliveryActor::BroadcastExplosion_Implementation(const TArray<AActor*>& HitActors, const TArray<FHitResult>& HitResults) {
}

void AFortGameplayEffectDeliveryActor::AddAdditionalExplodeEffectContainer(const FFortGameplayEffectContainerSpec& ExplodeContainer) {
}

void AFortGameplayEffectDeliveryActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortGameplayEffectDeliveryActor, bIsBeingKilled);
    DOREPLIFETIME(AFortGameplayEffectDeliveryActor, bHasExploded);
    DOREPLIFETIME(AFortGameplayEffectDeliveryActor, SpawnContext);
}

AFortGameplayEffectDeliveryActor::AFortGameplayEffectDeliveryActor() {
    bKillOnExplode = true;
    bSetHiddenOnKill = true;
    bKillOnMaxTargetsTouched = false;
    LifespanAfterKill = 1;
    TouchingActorsEffectApplicationUpdateTime = 1;
    bIsBeingKilled = false;
    bHasExploded = false;
    bIgnoreInstigatorCollision = true;
    bIgnoreVehicleAndAttachedActors = false;
    bDisableClientOverlapEvents = false;
    bAddHitResultToTouchApplication = false;
    bExplosionTransformIgnoresRotation = false;
    bCanExplodeMultipleTimes = false;
    bRegisterForEndOverlaps = false;
    bSpawnNavAreaModifierOverTargetSelectionShape = false;
    NavAreaClass = NULL;
    CollisionComponent = NULL;
    bDoExplosionReentrancyGuard = false;
}

