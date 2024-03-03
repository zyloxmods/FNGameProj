#include "FortGameplayAbilityMontageInfo.h"

FFortGameplayAbilityMontageInfo::FFortGameplayAbilityMontageInfo() {
    this->MontageToPlay = NULL;
    this->AnimPlayRate = 1;
    this->AnimRootMotionTranslationScale = 1;
    this->MontageSectionToPlay = EFortGameplayAbilityMontageSectionToPlay::FirstSection;
    this->bPlayRandomSection = false;
}

