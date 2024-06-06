#include "FortVehicleSeatComponent.h"
#include "Net/UnrealNetwork.h"

void UFortVehicleSeatComponent::OnRep_PlayerSlots() {
}

void UFortVehicleSeatComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortVehicleSeatComponent, PlayerSlots);
}

UFortVehicleSeatComponent::UFortVehicleSeatComponent() {
    SeatSwitchCooldown = 1;
    bHasAnyMountedWeaponSeats = false;
    bAlwaysAllowEntry = false;
}

