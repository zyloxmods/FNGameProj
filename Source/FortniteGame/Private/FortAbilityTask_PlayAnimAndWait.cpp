#include "FortAbilityTask_PlayAnimAndWait.h"

void UFortAbilityTask_PlayAnimAndWait::OnAnimInterrupted() {
}

void UFortAbilityTask_PlayAnimAndWait::OnAnimBlendingOut(UAnimMontage* Montage, bool bInterrupted) {
}

UFortAbilityTask_PlayAnimAndWait* UFortAbilityTask_PlayAnimAndWait::CreatePlayAnimAndWaitProxy(UGameplayAbility* OwningAbility, FName TaskInstanceName, const FFortGameplayAbilityMontageInfo& PlayMontageInfo, EFortSharedAnimationState NewAnimState, bool NewBStopWhenAbilityEnds) {
    return NULL;
}

UFortAbilityTask_PlayAnimAndWait::UFortAbilityTask_PlayAnimAndWait() {
    AnimState = EFortSharedAnimationState::Anim_Walk;
    bStopWhenAbilityEnds = true;
}

