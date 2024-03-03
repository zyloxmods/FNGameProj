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
    this->ReplicatedMaxSpeed = 1;
    this->GravityScale = 1;
    this->ChargePercent = 1;
    this->MomentumTransfer = 1;
    this->bAddOwnerVelocity = true;
    this->bSpawnPointCanBeUsedByOtherPlayers = false;
    this->PlayerSpawnOffset = 1;
    this->bRegisterInPerceptionSystem = false;
    this->bCanBePickedUpWhenStopped = false;
    this->CapsuleComponent = CreateDefaultSubobject<UFortProjectileRootComponent>(TEXT("CollisionCapsule0"));
    this->ProjectileMovementComponent = CreateDefaultSubobject<UFortProjectileMovementComponent>(TEXT("ProjectileComp0"));
    this->WaterInteractionComponent = CreateDefaultSubobject<UFortWaterInteractionComponent>(TEXT("WaterComponentName"));
    this->bDummyProjectile = false;
    this->bStopSimulatingOnHit = true;
    this->TouchWaterBehavior = EProjectileWaterHitBehavior::Overlap;
    this->bDisableCollisionOnStop = false;
    this->bStoppedSimulatingDueToHit = false;
    this->bReplicateStopSimulationLocation = false;
    this->bReplicateStopSimulationLocationOptimized = false;
    this->bClientInterpMovement = true;
    this->bClientInterpRotation = false;
    this->bUseClientsidePrediction = false;
    this->bIsPredictedProjectile = false;
    this->bAutoSelectAttachedForInterp = true;
    this->bFiredWhileTargeting = false;
    this->ResumeSimulationCount = 0;
    this->SyncId = 0;
    this->WeaponResponseType = EFortBaseWeaponDamage::Environmental;
    this->CachedPassByPawn = NULL;
    this->SkyTubeForceMultiplier = 1;
    this->CurrentSkyTube = NULL;
    this->BulletWhipTrackerComponentClass = NULL;
    this->bResetOverlapRestrictionsOnBounce = false;
    this->MaxLifespanOnStop = 1;
    this->BulletWhipTrackerComponent = NULL;
}

