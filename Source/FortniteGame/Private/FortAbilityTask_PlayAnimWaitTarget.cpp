#include "FortAbilityTask_PlayAnimWaitTarget.h"

UFortAbilityTask_PlayAnimWaitTarget* UFortAbilityTask_PlayAnimWaitTarget::PlayAnimWithMontageInfoAndWaitForTrigger(UGameplayAbility* OwningAbility, FName TaskInstanceName, const FFortGameplayAbilityMontageInfo& NewMontageInfo, EFortSharedAnimationState AnimState) {
    return NULL;
}

UFortAbilityTask_PlayAnimWaitTarget* UFortAbilityTask_PlayAnimWaitTarget::PlayAnimWaitTarget(UGameplayAbility* OwningAbility, FName TaskInstanceName, UAnimMontage* MontageToPlay, EFortSharedAnimationState AnimState, EFortGameplayAbilityMontageSectionToPlay SectionToPlay, FName OverrideSection) {
    return NULL;
}

void UFortAbilityTask_PlayAnimWaitTarget::OnTargetDataReadyCallback(const FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag) {
}

void UFortAbilityTask_PlayAnimWaitTarget::OnTargetDataCancelledCallback() {
}

UFortAbilityTask_PlayAnimWaitTarget::UFortAbilityTask_PlayAnimWaitTarget() {
}

