#include "FortMountedTurret.h"
#include "Net/UnrealNetwork.h"

void AFortMountedTurret::OnRep_TeamIndex(uint8 OldVal) {
}


bool AFortMountedTurret::IsLocalPlayerRiding() const {
    return false;
}

void AFortMountedTurret::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortMountedTurret, TeamIndex);
}

AFortMountedTurret::AFortMountedTurret() {
    this->TeamIndex = 0;
    this->bConstrainVerticalRotationOnly = true;
    this->PedalScaler = 0.00f;
    this->MovementParam = 0.00f;
    this->BatteryParam = 0.00f;
    this->RumbleIntensity = 0.00f;
    this->DriverCameraShake = NULL;
    this->PassengerCameraShake = NULL;
    this->LocalPlayerPawn = NULL;
    this->FortMountedTurretConfigsClass = NULL;
    this->FortMountedTurretConfigs = NULL;
}

