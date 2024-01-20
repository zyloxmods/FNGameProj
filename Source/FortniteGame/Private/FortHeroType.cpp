#include "FortHeroType.h"
#include "Templates/SubclassOf.h"

FText UFortHeroType::GetSubType() const {
    return FText::GetEmpty();
}

UFortFeedbackBank* UFortHeroType::GetMaleOverrideFeedback(bool bOnlyIfLoaded) const {
    return NULL;
}

UFortHeroGameplayDefinition* UFortHeroType::GetHeroGameplayDefinition() {
    return NULL;
}

UAnimMontage* UFortHeroType::GetFrontendAnimMontageIdleOverride() const {
    return NULL;
}

TSubclassOf<UFrontendAnimInstance> UFortHeroType::GetFrontendAnimClass() const {
    return NULL;
}

UFortFeedbackBank* UFortHeroType::GetFemaleOverrideFeedback(bool bOnlyIfLoaded) const {
    return NULL;
}

UFortHeroType::UFortHeroType() {
    this->bForceShowHeadAccessory = false;
    this->bForceShowBackpack = false;
    this->HeroGameplayDefinition = NULL;
    this->FrontEndBackPreviewRotationOffset = 0.00f;
}

