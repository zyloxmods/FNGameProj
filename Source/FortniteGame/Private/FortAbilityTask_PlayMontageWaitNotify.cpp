#include "FortAbilityTask_PlayMontageWaitNotify.h"

UFortAbilityTask_PlayMontageWaitNotify* UFortAbilityTask_PlayMontageWaitNotify::PlayMontageAndWaitNotify(UGameplayAbility* OwningAbility, FName TaskInstanceName, UAnimMontage* NewMontageToPlay, float PlayRate, FName StartSection, bool bStopWhenAbilityEnds, float RootMotionTranslationScale) {
    return NULL;
}

void UFortAbilityTask_PlayMontageWaitNotify::OnMontageNotifyEnd(UAnimSequenceBase* Animation, FGameplayTag NotifyTag) {
}

void UFortAbilityTask_PlayMontageWaitNotify::OnMontageNotifyBegin(UAnimSequenceBase* Animation, FGameplayTag NotifyTag) {
}

void UFortAbilityTask_PlayMontageWaitNotify::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

void UFortAbilityTask_PlayMontageWaitNotify::OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted) {
}

void UFortAbilityTask_PlayMontageWaitNotify::OnAbilityCancelled() {
}

UFortAbilityTask_PlayMontageWaitNotify::UFortAbilityTask_PlayMontageWaitNotify() {
    MontageToPlay = NULL;
}

