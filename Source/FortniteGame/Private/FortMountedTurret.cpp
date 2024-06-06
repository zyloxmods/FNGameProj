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
    TeamIndex = 0;
    bConstrainVerticalRotationOnly = true;
    PedalScaler = 1;
    MovementParam = 1;
    BatteryParam = 1;
    RumbleIntensity = 1;
    DriverCameraShake = NULL;
    PassengerCameraShake = NULL;
    LocalPlayerPawn = NULL;
    FortMountedTurretConfigsClass = NULL;
    FortMountedTurretConfigs = NULL;
}

