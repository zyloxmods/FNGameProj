#include "FortRemoteControlPawnSet.h"
#include "Net/UnrealNetwork.h"

void UFortRemoteControlPawnSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortRemoteControlPawnSet, FuseLength);
    DOREPLIFETIME(UFortRemoteControlPawnSet, MouseTurnCap);
    DOREPLIFETIME(UFortRemoteControlPawnSet, MouseTurnRate);
    DOREPLIFETIME(UFortRemoteControlPawnSet, MouseTurnRateMax);
    DOREPLIFETIME(UFortRemoteControlPawnSet, GyroTurnRateMax);
    DOREPLIFETIME(UFortRemoteControlPawnSet, KeyboardTurnRate);
    DOREPLIFETIME(UFortRemoteControlPawnSet, ControllerTurnRate);
    DOREPLIFETIME(UFortRemoteControlPawnSet, TouchTurnRate);
    DOREPLIFETIME(UFortRemoteControlPawnSet, MaxSpeed);
    DOREPLIFETIME(UFortRemoteControlPawnSet, MaxAcceleration);
    DOREPLIFETIME(UFortRemoteControlPawnSet, UseLaunchDelay);
    DOREPLIFETIME(UFortRemoteControlPawnSet, LaunchDelay);
    DOREPLIFETIME(UFortRemoteControlPawnSet, LaunchSpeed);
    DOREPLIFETIME(UFortRemoteControlPawnSet, OutOfHealthExplodeDelay);
    DOREPLIFETIME(UFortRemoteControlPawnSet, PlayerCanDetonate);
}

UFortRemoteControlPawnSet::UFortRemoteControlPawnSet() {
}

