#include "FortAnimInput_Skydiving.h"

FFortAnimInput_Skydiving::FFortAnimInput_Skydiving() {
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
    this->LocalAccelForward = 0.00f;
    this->LocalAccelRight = 0.00f;
    this->LocalVelocityRight = 0.00f;
    this->SkydiveAimPitch = 0.00f;
    this->SkydiveAimPitchInterpSpeed = 0.00f;
    this->SkydiveAimYaw = 0.00f;
    this->DeployChuteAnimRate = 0.00f;
    this->SkydiveDriftAnimRate = 0.00f;
    this->SkydiveDriftAnimRateCurrent = 0.00f;
    this->SkydiveFidgetAnimRate = 0.00f;
    this->SkydiveFidgetAnimRateCurrent = 0.00f;
    this->SkydiveAdditiveAlpha = 0.00f;
    this->SkydiveDriftDelay = 0.00f;
    this->SkydiveDriftAnim = 0;
    this->SkydiveDriftAnimMax = 0;
    this->LaunchpadAnim = 0;
    this->LocalAccelDir = ESkydivingDirection::Center;
    this->DirectionLast = ESkydivingDirection::Center;
}

