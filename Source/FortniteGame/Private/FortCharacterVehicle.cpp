#include "FortCharacterVehicle.h"
#include "FortVehicleSeatComponent.h"
#include "Net/UnrealNetwork.h"

void AFortCharacterVehicle::OnRep_OverrideAbilitySystemComponent() {
}

UAbilitySystemComponent* AFortCharacterVehicle::GetAbilitySystemComponent() const {
    return NULL;
}

void AFortCharacterVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortCharacterVehicle, OverrideAbilitySystemComponent);
}

AFortCharacterVehicle::AFortCharacterVehicle() {
    this->VehicleSeatComponent = CreateDefaultSubobject<UFortVehicleSeatComponent>(TEXT("VehicleSeatComponent"));
    this->OverrideAbilitySystemComponent = NULL;
    this->DriverAnimClass = NULL;
    this->PassengerAnimClass = NULL;
    this->bHasAnyMountedWeaponSeats = false;
    this->OstrichSet = NULL;
    this->StartupAbilitySet = NULL;
    this->CameraModeClass = NULL;
    this->PassengerCameraModeClass = NULL;
    this->JumpBoostDelay = 0.00f;
    this->MinBoostDuration = 0.00f;
    this->MaxBoostDuration = 0.00f;
    this->FullyChargedJumpTime = 0.00f;
    this->MinHoldDuration = 0.00f;
    this->DriverExitLaunchScale = 0.00f;
    this->PassengerExitLaunchScale = 0.00f;
    this->JumpPressTime = 0.00f;
}

