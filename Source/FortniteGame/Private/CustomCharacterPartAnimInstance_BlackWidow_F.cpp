#include "CustomCharacterPartAnimInstance_BlackWidow_F.h"

UCustomCharacterPartAnimInstance_BlackWidow_F::UCustomCharacterPartAnimInstance_BlackWidow_F() {
    this->BackpackRotatorBoneName = TEXT("spine_05");
    this->BackpackRotatorBaseName = TEXT("spine_01");
    this->PawnSpeedRange = 0.00f;
    this->FallingAnimDynamicsForceGliderMultiplier = 0.50f;
    this->FallingAnimDynamicsForceGlobalMultiplier = 0.10f;
    this->LegRotationScaleDownRateADS = 0.10f;
    this->Legs01PoseTargetAlpha = 0.00f;
    this->Legs02PoseTargetAlpha = 0.00f;
    this->Legs03PoseTargetAlpha = 0.00f;
    this->Legs04PoseTargetAlpha = 0.00f;
    this->CollapseLegsTimeSeconds = 0.00f;
    this->CollapsingLegs01PoseFullAlphaDelay = 0.00f;
    this->CollapsingLegs02PoseFullAlphaDelay = 0.17f;
    this->CollapsingLegs03PoseFullAlphaDelay = 0.28f;
    this->CollapsingLegs04PoseFullAlphaDelay = 0.47f;
    this->TopLegsAlpha = 0.25f;
    this->MidLegsAlpha = 0.25f;
    this->BotLegsAlpha = 0.60f;
    this->LegSinAnimationFrequency = 153.00f;
}

