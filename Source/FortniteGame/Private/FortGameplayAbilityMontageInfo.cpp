#include "FortGameplayAbilityMontageInfo.h"

FFortGameplayAbilityMontageInfo::FFortGameplayAbilityMontageInfo() {
    this->MontageToPlay = NULL;
    this->AnimPlayRate = 0.00f;
    this->AnimRootMotionTranslationScale = 0.00f;
    this->MontageSectionToPlay = EFortGameplayAbilityMontageSectionToPlay::FirstSection;
    this->bPlayRandomSection = false;
}

