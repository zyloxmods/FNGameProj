#include "FortAbilityTask_ApplyRootMotionMantisForce.h"
#include "Net/UnrealNetwork.h"

UFortAbilityTask_ApplyRootMotionMantisForce* UFortAbilityTask_ApplyRootMotionMantisForce::ApplyRootMotionMantisForce(UGameplayAbility* OwningAbility, float NewDuration, UAnimMontage* NewTechniqueMontage) {
    return NULL;
}

void UFortAbilityTask_ApplyRootMotionMantisForce::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortAbilityTask_ApplyRootMotionMantisForce, Duration);
    DOREPLIFETIME(UFortAbilityTask_ApplyRootMotionMantisForce, TechniqueMontage);
}

UFortAbilityTask_ApplyRootMotionMantisForce::UFortAbilityTask_ApplyRootMotionMantisForce() {
    this->Duration = 1;
    this->TechniqueMontage = NULL;
}

