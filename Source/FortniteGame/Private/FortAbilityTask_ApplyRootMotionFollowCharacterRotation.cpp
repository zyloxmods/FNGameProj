#include "FortAbilityTask_ApplyRootMotionFollowCharacterRotation.h"
#include "Net/UnrealNetwork.h"

UFortAbilityTask_ApplyRootMotionFollowCharacterRotation* UFortAbilityTask_ApplyRootMotionFollowCharacterRotation::ApplyRootMotionFollowCharacterRotation(UGameplayAbility* OwningAbility, FName TaskInstanceName, float StrengthInWater, float NewDuration, bool NewBIsAdditive, UCurveFloat* StrengthOverTimeOnLand, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool NewBEnableGravity) {
    return NULL;
}

void UFortAbilityTask_ApplyRootMotionFollowCharacterRotation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortAbilityTask_ApplyRootMotionFollowCharacterRotation, Strength);
    DOREPLIFETIME(UFortAbilityTask_ApplyRootMotionFollowCharacterRotation, Duration);
    DOREPLIFETIME(UFortAbilityTask_ApplyRootMotionFollowCharacterRotation, bIsAdditive);
    DOREPLIFETIME(UFortAbilityTask_ApplyRootMotionFollowCharacterRotation, StrengthOverTime);
    DOREPLIFETIME(UFortAbilityTask_ApplyRootMotionFollowCharacterRotation, bEnableGravity);
}

UFortAbilityTask_ApplyRootMotionFollowCharacterRotation::UFortAbilityTask_ApplyRootMotionFollowCharacterRotation() {
    Strength = 1;
    Duration = 1;
    bIsAdditive = false;
    StrengthOverTime = NULL;
    bEnableGravity = false;
}

