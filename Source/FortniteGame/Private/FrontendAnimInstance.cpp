#include "FrontendAnimInstance.h"

bool UFrontendAnimInstance::ShouldHidePropsDuringBlend(UAnimMontage* Montage) const {
    return false;
}

void UFrontendAnimInstance::PlaySelected() {
}

void UFrontendAnimInstance::PlayOutro() {
}

void UFrontendAnimInstance::PlayIntro() {
}


UFrontendAnimInstance::UFrontendAnimInstance() {
    this->bIsSkydiving = false;
    this->bEnableHandIK = false;
    this->bIsPlayingEmote = false;
    this->bIsBodyTypeManuallySet = false;
    this->bIsCharacterCustomizationLoaded = false;
    this->bLookingAtBackpack = false;
    this->bIsRebirth = false;
    this->AnimBodyType = EFortPlayerAnimBodyType::Small;
    this->HandIKRetargetingWeight = 1;
    this->RightHandIKAlpha = 1;
    this->LeftHandIKAlpha = 1;
    this->IdlePelvisOffsetAlpha = 1;
    this->EmoteHipOffsetAlpha = 1;
    this->EmoteHipOffsetInterpSpeed = 1;
    this->FortPlayerPawn = NULL;
    this->Gender = EFortDisplayGender::Male;
    this->IntroAnimation_Female = NULL;
    this->IntroAnimation_Male = NULL;
    this->OutroAnimation_Female = NULL;
    this->OutroAnimation_Male = NULL;
    this->SelectedAnimation_Female = NULL;
    this->SelectedAnimation_Male = NULL;
    this->bCanPlayCustomAnimations = false;
    this->bDontCrossArms = false;
    this->bNoHandsOnHips = false;
}

