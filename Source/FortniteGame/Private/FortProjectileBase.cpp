#include "FortProjectileBase.h"
#include "Components/CapsuleComponent.h"
#include "FortProjectileMovementComponent.h"
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

AFortPlayerController* AFortProjectileBase::GetOwnerPlayerController() {
    return NULL;
}

float AFortProjectileBase::GetGravityScale() const {
    return 0.0f;
}

float AFortProjectileBase::GetDefaultSpeed(float InChargePercent) const {
    return 0.0f;
}

void AFortProjectileBase::ExitSkyTube(AFortSkyTube* SkyTube, bool& bIsLastTube) {
}

void AFortProjectileBase::EnterSkyTube(AFortSkyTube* SkyTube, bool& bIsFirstTube) {
}

void AFortProjectileBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortProjectileBase, ReplicatedMaxSpeed);
    DOREPLIFETIME(AFortProjectileBase, GravityScale);
    DOREPLIFETIME(AFortProjectileBase, ChargePercent);
    DOREPLIFETIME(AFortProjectileBase, SimulationStoppingHit);
    DOREPLIFETIME(AFortProjectileBase, ResumeSimulationCount);
    DOREPLIFETIME(AFortProjectileBase, CurrentSkyTube);
}

AFortProjectileBase::AFortProjectileBase() {
    this->ReplicatedMaxSpeed = 0.00f;
    this->GravityScale = 1.00f;
    this->ChargePercent = 0.00f;
    this->MomentumTransfer = 0.00f;
    this->bAddOwnerVelocity = true;
    this->bSpawnPointCanBeUsedByOtherPlayers = false;
    this->PlayerSpawnOffset = 0.00f;
    this->bCanBePickedUpWhenStopped = false;
    this->CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCapsule0"));
    this->ProjectileMovementComponent = CreateDefaultSubobject<UFortProjectileMovementComponent>(TEXT("ProjectileComp0"));
    this->bDummyProjectile = false;
    this->bStopSimulatingOnHit = true;
    this->bDisableCollisionOnStop = false;
    this->bStoppedSimulatingDueToHit = false;
    this->bReplicateStopSimulationLocation = false;
    this->bClientInterpMovement = true;
    this->bClientInterpRotation = false;
    this->bAutoSelectAttachedForInterp = true;
    this->bFiredWhileTargeting = false;
    this->ResumeSimulationCount = 0;
    this->WeaponResponseType = EFortBaseWeaponDamage::Environmental;
    this->CachedPassByPawn = NULL;
    this->SkyTubeForceMultiplier = 1.00f;
    this->CurrentSkyTube = NULL;
    this->BulletWhipTrackerComponentClass = NULL;
    this->bResetOverlapRestrictionsOnBounce = false;
    this->BulletWhipTrackerComponent = NULL;
}

