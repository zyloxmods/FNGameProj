#include "FortAnimInput_Skydiving.h"

FFortAnimInput_Skydiving::FFortAnimInput_Skydiving() {
    this->bUseParaGlideRootModifier = false;
    this->bIsSkydivingFromLaunchPad = false;
    this->bIsSkydivingFromBus = false;
    this->bIsInVortex = false;
    this->bIsUsingUmbrella = false;
    this->bIsActivelyStrafingInAir = false;
    this->bIsDiving = false;
    this->bIsDivingUpInVortex = false;
    this->bIsParachuteOpen = false;
    this->bIsSkydiving = false;
    this->bIsParachuteLeaning = false;
    this->bIsSkydiveLeaning = false;
    this->bIsLeaning = false;
    this->bIsSkydiveDiveMode = false;
    this->bParachuteLeanTransition = false;
    this->bPlayedParachuteLeanTransition = false;
    this->bPlaySkydiveDrift = false;
    this->bSkydiveDriftDelayActive = false;
    this->bSkydiveDriftAnimAllowed = false;
    this->bIsGliderRight = false;
    this->bIsGliderCenter = false;
    this->bIsGliderLeft = false;
    this->bIsGliderForward = false;
    this->bIsGliderBack = false;
    this->LocalAccelForward = 1;
    this->LocalAccelRight = 1;
    this->LocalVelocityRight = 1;
    this->SkydiveAimPitch = 1;
    this->SkydiveAimPitchInterpSpeed = 1;
    this->SkydiveAimYaw = 1;
    this->DeployChuteAnimRate = 1;
    this->SkydiveDriftAnimRate = 1;
    this->SkydiveDriftAnimRateCurrent = 1;
    this->SkydiveFidgetAnimRate = 1;
    this->SkydiveFidgetAnimRateCurrent = 1;
    this->SkydiveAdditiveAlpha = 1;
    this->SkydiveDriftDelay = 1;
    this->SkydiveDriftAnim = 0;
    this->SkydiveDriftAnimMax = 0;
    this->LaunchpadAnim = 0;
    this->LocalAccelDir = ESkydivingDirection::Center;
    this->DirectionLast = ESkydivingDirection::Center;
}

