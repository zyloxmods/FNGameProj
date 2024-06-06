#include "FortGameplayAbilityMontageInfo.h"

FFortGameplayAbilityMontageInfo::FFortGameplayAbilityMontageInfo() {
    MontageToPlay = NULL;
    AnimPlayRate = 1;
    AnimRootMotionTranslationScale = 1;
    MontageSectionToPlay = EFortGameplayAbilityMontageSectionToPlay::FirstSection;
    bPlayRandomSection = false;
}

