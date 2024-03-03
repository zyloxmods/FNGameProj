#include "FortMovementSet.h"
#include "Net/UnrealNetwork.h"

void UFortMovementSet::OnRep_SpeedMultiplier(const FFortGameplayAttributeData& OldValue) {
}

void UFortMovementSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortMovementSet, WalkSpeed);
    DOREPLIFETIME(UFortMovementSet, RunSpeed);
    DOREPLIFETIME(UFortMovementSet, SprintSpeed);
    DOREPLIFETIME(UFortMovementSet, FlySpeed);
    DOREPLIFETIME(UFortMovementSet, CrouchedRunSpeed);
    DOREPLIFETIME(UFortMovementSet, CrouchedSprintSpeed);
    DOREPLIFETIME(UFortMovementSet, BackwardSpeedMultiplier);
    DOREPLIFETIME(UFortMovementSet, JumpHeight);
    DOREPLIFETIME(UFortMovementSet, GravityZScale);
    DOREPLIFETIME(UFortMovementSet, VehicleGravityZScale);
    DOREPLIFETIME(UFortMovementSet, SpeedMultiplier);
    DOREPLIFETIME(UFortMovementSet, LandSpeedMultiplier);
    DOREPLIFETIME(UFortMovementSet, SwimSpeedMultiplier);
}

UFortMovementSet::UFortMovementSet() {
}

