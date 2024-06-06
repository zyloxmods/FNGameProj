#include "CustomCharacterPartAnimInstance_BlackWidow_F.h"

UCustomCharacterPartAnimInstance_BlackWidow_F::UCustomCharacterPartAnimInstance_BlackWidow_F() {
    BackpackRotatorBoneName = TEXT("spine_05");
    BackpackRotatorBaseName = TEXT("spine_01");
    PawnSpeedRange = 1;
    FallingAnimDynamicsForceGliderMultiplier = 1;
    FallingAnimDynamicsForceGlobalMultiplier = 1;
    LegRotationScaleDownRateADS = 1;
    Legs01PoseTargetAlpha = 1;
    Legs02PoseTargetAlpha = 1;
    Legs03PoseTargetAlpha = 1;
    Legs04PoseTargetAlpha = 1;
    CollapseLegsTimeSeconds = 1;
    CollapsingLegs01PoseFullAlphaDelay = 1;
    CollapsingLegs02PoseFullAlphaDelay = 1;
    CollapsingLegs03PoseFullAlphaDelay = 1;
    CollapsingLegs04PoseFullAlphaDelay = 1;
    TopLegsAlpha = 1;
    MidLegsAlpha = 1;
    BotLegsAlpha = 1;
    LegSinAnimationFrequency = 1;
}

