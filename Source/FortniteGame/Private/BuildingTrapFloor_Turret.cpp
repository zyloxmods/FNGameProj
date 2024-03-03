#include "BuildingTrapFloor_Turret.h"
#include "FortMinigameLogicComponent.h"
#include "Net/UnrealNetwork.h"

void ABuildingTrapFloor_Turret::UnbindTimers() {
}

void ABuildingTrapFloor_Turret::SetTarget(AFortPawn* NewTarget) {
}

void ABuildingTrapFloor_Turret::RotateTurretServer() {
}

void ABuildingTrapFloor_Turret::RotateTurretClient() {
}

void ABuildingTrapFloor_Turret::PerformGunRotation(const AFortPawn* TargetActor, const FVector& AimLocation, const FRotator& CurrentRotation, USceneComponent* RotateComponent) {
}

void ABuildingTrapFloor_Turret::OnRep_CurrentlyActive() {
}

void ABuildingTrapFloor_Turret::OnLeaveTurretRange(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ABuildingTrapFloor_Turret::OnEnterTurretRange(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ABuildingTrapFloor_Turret::MinigameStarted() {
}

void ABuildingTrapFloor_Turret::MinigameEnded() {
}

AFortPawn* ABuildingTrapFloor_Turret::GetTarget() {
    return NULL;
}

AFortPlayerPawn* ABuildingTrapFloor_Turret::GetClosestTarget() {
    return NULL;
}

void ABuildingTrapFloor_Turret::FireTurret() {
}

void ABuildingTrapFloor_Turret::FinishReload() {
}

void ABuildingTrapFloor_Turret::DeactivateTurret() {
}

void ABuildingTrapFloor_Turret::ConsumeAmmo() {
}

void ABuildingTrapFloor_Turret::BindTimers() {
}

void ABuildingTrapFloor_Turret::AddOverlapComponent(UPrimitiveComponent* OverlapComponent) {
}

void ABuildingTrapFloor_Turret::ActivateTurret() {
}

void ABuildingTrapFloor_Turret::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingTrapFloor_Turret, Target);
    DOREPLIFETIME(ABuildingTrapFloor_Turret, CurrentRotationalSpeed);
    DOREPLIFETIME(ABuildingTrapFloor_Turret, bCurrentlyActive);
    DOREPLIFETIME(ABuildingTrapFloor_Turret, ShootLocation);
    DOREPLIFETIME(ABuildingTrapFloor_Turret, bIsSearching);
}

ABuildingTrapFloor_Turret::ABuildingTrapFloor_Turret() {
    this->MinigameLogic = CreateDefaultSubobject<UFortMinigameLogicComponent>(TEXT("MinigameComponent"));
    this->RotateComp = NULL;
    this->FiringPoint = NULL;
    this->OverlapCollisionComponent = NULL;
    this->RotateInterval = 1;
    this->BlockingActor = NULL;
    this->Target = NULL;
    this->MinRotationSpeed = 1;
    this->MaxRotationSpeed = 1;
    this->CurrentRotationalSpeed = 1;
    this->UpdateIntervalTime = 1;
    this->CachedUpdateTime = 1;
    this->IncreaseIntervalRotationSpeed = 1;
    this->DecreaseIntervalRotationSpeed = 1;
    this->bCurrentlyActive = false;
    this->bInSlowdownMode = false;
    this->bUseOwnerTeam = false;
    this->bCanTakeDamage = false;
    this->LifeTime = 1;
    this->FireRate = 1;
    this->ReloadTime = 1;
    this->CurrentAmmoCount = 0;
    this->MaxAmmo = 0;
    this->bIsSearching = false;
}

