#include "FortAdvancedMovementSet.h"
#include "Net/UnrealNetwork.h"

void UFortAdvancedMovementSet::OnRep_MinAnalogWalkSpeed() {
}

void UFortAdvancedMovementSet::OnRep_MaxAccelerationFlying() {
}

void UFortAdvancedMovementSet::OnRep_MaxAcceleration() {
}

void UFortAdvancedMovementSet::OnRep_JumpZVelocity() {
}

void UFortAdvancedMovementSet::OnRep_GroundFriction() {
}

void UFortAdvancedMovementSet::OnRep_BrakingFrictionFactor() {
}

void UFortAdvancedMovementSet::OnRep_BrakingDecelerationWalking() {
}

void UFortAdvancedMovementSet::OnRep_BrakingDecelerationFlying() {
}

void UFortAdvancedMovementSet::OnRep_BrakingDecelerationFalling() {
}

void UFortAdvancedMovementSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortAdvancedMovementSet, GroundFriction);
    DOREPLIFETIME(UFortAdvancedMovementSet, BrakingDecelerationWalking);
    DOREPLIFETIME(UFortAdvancedMovementSet, BrakingDecelerationFalling);
    DOREPLIFETIME(UFortAdvancedMovementSet, BrakingDecelerationFlying);
    DOREPLIFETIME(UFortAdvancedMovementSet, MaxAcceleration);
    DOREPLIFETIME(UFortAdvancedMovementSet, MaxAccelerationFlying);
    DOREPLIFETIME(UFortAdvancedMovementSet, BrakingFrictionFactor);
    DOREPLIFETIME(UFortAdvancedMovementSet, JumpZVelocity);
    DOREPLIFETIME(UFortAdvancedMovementSet, JumpHorizontalAccelerationOverride);
    DOREPLIFETIME(UFortAdvancedMovementSet, JumpHorizontalVelocityOverride);
    DOREPLIFETIME(UFortAdvancedMovementSet, MinAnalogWalkSpeed);
}

UFortAdvancedMovementSet::UFortAdvancedMovementSet() {
}

