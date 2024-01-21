#include "FortAnimInput_PlayerAnimAsset.h"

FFortAnimInput_PlayerAnimAsset::FFortAnimInput_PlayerAnimAsset() {
    this->bShouldApplyAimOffsetFullBody = false;
    this->FullBodyAimOffsetAlpha = 0.00f;
    this->UpperBodyAimOffsetAlpha = 0.00f;
    this->bOverrideDisableArmsHeadAdditive = false;
    this->DisableArmsHeadAdditiveOverride = 0.00f;
    this->TargetingPose = NULL;
    this->TargetingAimOffset = NULL;
    this->NonTargetingPose = NULL;
    this->NonTargetingAimOffset = NULL;
    this->RelaxedPose = NULL;
    this->RelaxedPoseLevel2 = NULL;
    this->RelaxedAimOffset = NULL;
    this->JogAdditiveBlendSpace = NULL;
    this->JogAdditiveBlendSpaceRelaxed = NULL;
    this->JogAdditiveBlendSpaceRelaxedLevel2 = NULL;
    this->SprintAnimation = NULL;
    this->SprintTargetingAnimation = NULL;
    this->CrouchTargetingPose = NULL;
    this->CrouchNonTargetingPose = NULL;
    this->CrouchRelaxedPose = NULL;
    this->CrouchWalkAdditiveBlendSpace = NULL;
    this->CrouchJogAdditiveBlendSpace = NULL;
    this->CrouchJogAdditiveBlendSpaceRelaxed = NULL;
    this->CrouchSprintAnimation = NULL;
    this->CrouchSprintTargetingAnimation = NULL;
    this->IdleNoise = NULL;
    this->IdleNoise_AR_DownSights = NULL;
    this->bOverridePitchAndYawOffsets = false;
}

