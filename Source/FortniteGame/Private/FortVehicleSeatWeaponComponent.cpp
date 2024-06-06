#include "FortVehicleSeatWeaponComponent.h"
#include "Net/UnrealNetwork.h"

void UFortVehicleSeatWeaponComponent::OnRep_ShotsFired() {
}

void UFortVehicleSeatWeaponComponent::OnRep_OverheatValueRepped() {
}


AActor* UFortVehicleSeatWeaponComponent::GetVehicle() const {
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
    DOREPLIFETIME(UFortVehicleSeatWeaponComponent, CachedWeaponState);
}

UFortVehicleSeatWeaponComponent::UFortVehicleSeatWeaponComponent() {
    ActiveSeatIdx = 0;
    CachedWeapon = NULL;
    CachedWeaponDef = NULL;
    CachedOverheatMax = 1;
    CachedOverheatValue = 1;
    OverheatValueRepped = 1;
    bWeaponEquipped = false;
    bUseVehicleOrientationForShootingCone = false;
    bControlledByMultipleSeats = false;
    ActorBase = NULL;
    bReadyToSleep = true;
    ShotsFired = 0;
    bWeaponOverheatDataHasBeenCached = false;
    bSaveAndRestoreWeaponData = false;
}

