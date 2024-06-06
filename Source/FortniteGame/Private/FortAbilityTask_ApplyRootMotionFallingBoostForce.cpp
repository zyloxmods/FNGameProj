#include "FortAbilityTask_ApplyRootMotionFallingBoostForce.h"
#include "Net/UnrealNetwork.h"

void UFortAbilityTask_ApplyRootMotionFallingBoostForce::OnLandedCallback(const FHitResult& Hit) {
}

UFortAbilityTask_ApplyRootMotionFallingBoostForce* UFortAbilityTask_ApplyRootMotionFallingBoostForce::ApplyRootMotionFallingBoostForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, float NewVerticalImpulse, float NewDuration, float NewGravityScalar, float NewMaxAcceleration, float NewLateralFriction, float NewMaxLateralSpeed) {
    return NULL;
}

void UFortAbilityTask_ApplyRootMotionFallingBoostForce::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortAbilityTask_ApplyRootMotionFallingBoostForce, VerticalImpulse);
    DOREPLIFETIME(UFortAbilityTask_ApplyRootMotionFallingBoostForce, Duration);
    DOREPLIFETIME(UFortAbilityTask_ApplyRootMotionFallingBoostForce, GravityScalar);
    DOREPLIFETIME(UFortAbilityTask_ApplyRootMotionFallingBoostForce, MaxAcceleration);
    DOREPLIFETIME(UFortAbilityTask_ApplyRootMotionFallingBoostForce, LateralFriction);
    DOREPLIFETIME(UFortAbilityTask_ApplyRootMotionFallingBoostForce, MaxLateralSpeed);
}

UFortAbilityTask_ApplyRootMotionFallingBoostForce::UFortAbilityTask_ApplyRootMotionFallingBoostForce() {
    VerticalImpulse = 1;
    Duration = 1;
    GravityScalar = 1;
    MaxAcceleration = 1;
    LateralFriction = 1;
    MaxLateralSpeed = 1;
}

