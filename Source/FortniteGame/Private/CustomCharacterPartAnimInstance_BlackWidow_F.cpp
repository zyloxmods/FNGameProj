#include "CustomCharacterPartAnimInstance_BlackWidow_F.h"

UCustomCharacterPartAnimInstance_BlackWidow_F::UCustomCharacterPartAnimInstance_BlackWidow_F() {
    this->BackpackRotatorBoneName = TEXT("spine_05");
    this->BackpackRotatorBaseName = TEXT("spine_01");
    this->PawnSpeedRange = 1;
    this->FallingAnimDynamicsForceGliderMultiplier = 1;
    this->FallingAnimDynamicsForceGlobalMultiplier = 1;
    this->LegRotationScaleDownRateADS = 1;
    this->Legs01PoseTargetAlpha = 1;
    this->Legs02PoseTargetAlpha = 1;
    this->Legs03PoseTargetAlpha = 1;
    this->Legs04PoseTargetAlpha = 1;
    this->CollapseLegsTimeSeconds = 1;
    this->CollapsingLegs01PoseFullAlphaDelay = 1;
    this->CollapsingLegs02PoseFullAlphaDelay = 1;
    this->CollapsingLegs03PoseFullAlphaDelay = 1;
    this->CollapsingLegs04PoseFullAlphaDelay = 1;
    this->TopLegsAlpha = 1;
    this->MidLegsAlpha = 1;
    this->BotLegsAlpha = 1;
    this->LegSinAnimationFrequency = 1;
}

