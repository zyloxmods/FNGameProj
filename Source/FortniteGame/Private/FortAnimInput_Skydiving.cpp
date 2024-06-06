#include "FortAnimInput_Skydiving.h"

FFortAnimInput_Skydiving::FFortAnimInput_Skydiving() {
    bUseParaGlideRootModifier = false;
    bIsSkydivingFromLaunchPad = false;
    bIsSkydivingFromBus = false;
    bIsInVortex = false;
    bIsUsingUmbrella = false;
    bIsActivelyStrafingInAir = false;
    bIsDiving = false;
    bIsDivingUpInVortex = false;
    bIsParachuteOpen = false;
    bIsSkydiving = false;
    bIsParachuteLeaning = false;
    bIsSkydiveLeaning = false;
    bIsLeaning = false;
    bIsSkydiveDiveMode = false;
    bParachuteLeanTransition = false;
    bPlayedParachuteLeanTransition = false;
    bPlaySkydiveDrift = false;
    bSkydiveDriftDelayActive = false;
    bSkydiveDriftAnimAllowed = false;
    bIsGliderRight = false;
    bIsGliderCenter = false;
    bIsGliderLeft = false;
    bIsGliderForward = false;
    bIsGliderBack = false;
    LocalAccelForward = 1;
    LocalAccelRight = 1;
    LocalVelocityRight = 1;
    SkydiveAimPitch = 1;
    SkydiveAimPitchInterpSpeed = 1;
    SkydiveAimYaw = 1;
    DeployChuteAnimRate = 1;
    SkydiveDriftAnimRate = 1;
    SkydiveDriftAnimRateCurrent = 1;
    SkydiveFidgetAnimRate = 1;
    SkydiveFidgetAnimRateCurrent = 1;
    SkydiveAdditiveAlpha = 1;
    SkydiveDriftDelay = 1;
    SkydiveDriftAnim = 0;
    SkydiveDriftAnimMax = 0;
    LaunchpadAnim = 0;
    LocalAccelDir = ESkydivingDirection::Center;
    DirectionLast = ESkydivingDirection::Center;
}

