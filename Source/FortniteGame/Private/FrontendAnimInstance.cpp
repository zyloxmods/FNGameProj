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
    bIsSkydiving = false;
    bEnableHandIK = false;
    bIsPlayingEmote = false;
    bIsBodyTypeManuallySet = false;
    bIsCharacterCustomizationLoaded = false;
    bLookingAtBackpack = false;
    bIsRebirth = false;
    AnimBodyType = EFortPlayerAnimBodyType::Small;
    HandIKRetargetingWeight = 1;
    RightHandIKAlpha = 1;
    LeftHandIKAlpha = 1;
    IdlePelvisOffsetAlpha = 1;
    EmoteHipOffsetAlpha = 1;
    EmoteHipOffsetInterpSpeed = 1;
    FortPlayerPawn = NULL;
    Gender = EFortDisplayGender::Male;
    IntroAnimation_Female = NULL;
    IntroAnimation_Male = NULL;
    OutroAnimation_Female = NULL;
    OutroAnimation_Male = NULL;
    SelectedAnimation_Female = NULL;
    SelectedAnimation_Male = NULL;
    bCanPlayCustomAnimations = false;
    bDontCrossArms = false;
    bNoHandsOnHips = false;
}

