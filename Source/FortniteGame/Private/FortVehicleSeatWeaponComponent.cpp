#include "FortVehicleSeatWeaponComponent.h"
#include "Net/UnrealNetwork.h"

void UFortVehicleSeatWeaponComponent::OnRep_ShotsFired() {
}

void UFortVehicleSeatWeaponComponent::OnRep_OverheatValueRepped() {
}


AFortAthenaVehicle* UFortVehicleSeatWeaponComponent::GetVehicle() const {
    return NULL;
}

float UFortVehicleSeatWeaponComponent::GetOverheatScaler() {
    return 0.0f;
}

float UFortVehicleSeatWeaponComponent::GetOverheatingMaxValue() const {
    return 0.0f;
}

float UFortVehicleSeatWeaponComponent::GetCurrentOverheatValue() {
    return 0.0f;
}

void UFortVehicleSeatWeaponComponent::EquipVehicleWeapon(AFortPawn* FortPawn, FWeaponSeatDefinition& WeaponSeatDefinition, int32 ItemLevel) {
}

void UFortVehicleSeatWeaponComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortVehicleSeatWeaponComponent, OverheatValueRepped);
    DOREPLIFETIME(UFortVehicleSeatWeaponComponent, bWeaponEquipped);
    DOREPLIFETIME(UFortVehicleSeatWeaponComponent, ActorBase);
    DOREPLIFETIME(UFortVehicleSeatWeaponComponent, ShotsFired);
    DOREPLIFETIME(UFortVehicleSeatWeaponComponent, bWeaponOverheatDataHasBeenCached);
    DOREPLIFETIME(UFortVehicleSeatWeaponComponent, CachedWeaponOverheatData);
}

UFortVehicleSeatWeaponComponent::UFortVehicleSeatWeaponComponent() {
    this->ActiveSeatIdx = -1;
    this->CachedWeapon = NULL;
    this->CachedWeaponDef = NULL;
    this->CachedOverheatMax = 0.00f;
    this->CachedOverheatValue = 0.00f;
    this->OverheatValueRepped = 0.00f;
    this->bWeaponEquipped = false;
    this->bUseVehicleOrientationForShootingCone = false;
    this->bControlledByMultipleSeats = false;
    this->ActorBase = NULL;
    this->bReadyToSleep = true;
    this->ShotsFired = 0;
    this->bWeaponOverheatDataHasBeenCached = false;
}

