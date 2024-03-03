#include "FortAdvancedMovementSet.h"
#include "Net/UnrealNetwork.h"

void UFortAdvancedMovementSet::OnRep_MinAnalogWalkSpeed(const FFortGameplayAttributeData& OldValue) {
}

void UFortAdvancedMovementSet::OnRep_MaxAccelerationFlying(const FFortGameplayAttributeData& OldValue) {
}

void UFortAdvancedMovementSet::OnRep_MaxAcceleration(const FFortGameplayAttributeData& OldValue) {
}

void UFortAdvancedMovementSet::OnRep_JumpZVelocity(const FFortGameplayAttributeData& OldValue) {
}

void UFortAdvancedMovementSet::OnRep_GroundFriction(const FFortGameplayAttributeData& OldValue) {
}

void UFortAdvancedMovementSet::OnRep_BrakingFrictionFactor(const FFortGameplayAttributeData& OldValue) {
}

void UFortAdvancedMovementSet::OnRep_BrakingDecelerationWalking(const FFortGameplayAttributeData& OldValue) {
}

void UFortAdvancedMovementSet::OnRep_BrakingDecelerationFlying(const FFortGameplayAttributeData& OldValue) {
}

void UFortAdvancedMovementSet::OnRep_BrakingDecelerationFalling(const FFortGameplayAttributeData& OldValue) {
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
    DOREPLIFETIME(UFortAdvancedMovementSet, AirControlMultiplier);
}

UFortAdvancedMovementSet::UFortAdvancedMovementSet() {
}

