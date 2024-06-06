#include "FortProjectileBase.h"
#include "FortProjectileMovementComponent.h"
#include "FortProjectileRootComponent.h"
#include "FortWaterInteractionComponent.h"
#include "Net/UnrealNetwork.h"

void AFortProjectileBase::SetGravityScale(float InitialGravityScale) {
}

void AFortProjectileBase::ResumeSimulation() {
}


void AFortProjectileBase::OnStopCallback(const FHitResult& Hit) {
}




void AFortProjectileBase::OnRep_SimulationStoppingHit() {
}

void AFortProjectileBase::OnRep_ResumeSimulationCount() {
}

void AFortProjectileBase::OnRep_ReplicatedMaxSpeed() {
}

void AFortProjectileBase::OnRep_GravityScale() {
}

void AFortProjectileBase::OnRep_CurrentSkyTube() {
}


void AFortProjectileBase::OnBounceCallback(const FHitResult& Hit, const FVector& ImpactVelocity) {
}


AFortSkyTube* AFortProjectileBase::GetSkyTube() const {
    return NULL;
}

AFortWeapon* AFortProjectileBase::GetOwnerWeapon() {
    return NULL;
}

AFortPlayerController* AFortProjectileBase::GetOwnerPlayerController() {
    return NULL;
}

float AFortProjectileBase::GetGravityScale() const {
    return 0.0f;
}

float AFortProjectileBase::GetDefaultSpeed(float InChargePercent) const {
    return 0.0f;
}

float AFortProjectileBase::GetDefaultGravityScale() const {
    return 0.0f;
}

void AFortProjectileBase::ExitSkyTube(AFortSkyTube* SkyTube, bool& bIsLastTube) {
}

void AFortProjectileBase::EnterSkyTube(AFortSkyTube* SkyTube, bool& bIsFirstTube) {
}

void AFortProjectileBase::AddTagToDefaultTags(FGameplayTag TagToAddToProjectileDefaultTags) {
}

void AFortProjectileBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortProjectileBase, ReplicatedMaxSpeed);
    DOREPLIFETIME(AFortProjectileBase, GravityScale);
    DOREPLIFETIME(AFortProjectileBase, ChargePercent);
    DOREPLIFETIME(AFortProjectileBase, SimulationStoppingHit);
    DOREPLIFETIME(AFortProjectileBase, ResumeSimulationCount);
    DOREPLIFETIME(AFortProjectileBase, SyncId);
    DOREPLIFETIME(AFortProjectileBase, CurrentSkyTube);
}

AFortProjectileBase::AFortProjectileBase() {
    ReplicatedMaxSpeed = 1;
    GravityScale = 1;
    ChargePercent = 1;
    MomentumTransfer = 1;
    bAddOwnerVelocity = true;
    bSpawnPointCanBeUsedByOtherPlayers = false;
    PlayerSpawnOffset = 1;
    bRegisterInPerceptionSystem = false;
    bCanBePickedUpWhenStopped = false;
    CapsuleComponent = CreateDefaultSubobject<UFortProjectileRootComponent>(TEXT("CollisionCapsule0"));
    ProjectileMovementComponent = CreateDefaultSubobject<UFortProjectileMovementComponent>(TEXT("ProjectileComp0"));
    WaterInteractionComponent = CreateDefaultSubobject<UFortWaterInteractionComponent>(TEXT("WaterComponentName"));
    bDummyProjectile = false;
    bStopSimulatingOnHit = true;
    TouchWaterBehavior = EProjectileWaterHitBehavior::Overlap;
    bDisableCollisionOnStop = false;
    bStoppedSimulatingDueToHit = false;
    bReplicateStopSimulationLocation = false;
    bReplicateStopSimulationLocationOptimized = false;
    bClientInterpMovement = true;
    bClientInterpRotation = false;
    bUseClientsidePrediction = false;
    bIsPredictedProjectile = false;
    bAutoSelectAttachedForInterp = true;
    bFiredWhileTargeting = false;
    ResumeSimulationCount = 0;
    SyncId = 0;
    WeaponResponseType = EFortBaseWeaponDamage::Environmental;
    CachedPassByPawn = NULL;
    SkyTubeForceMultiplier = 1;
    CurrentSkyTube = NULL;
    BulletWhipTrackerComponentClass = NULL;
    bResetOverlapRestrictionsOnBounce = false;
    MaxLifespanOnStop = 1;
    BulletWhipTrackerComponent = NULL;
}

