#include "LayerAnimInstance_MechanicalEngineerPet.h"

ULayerAnimInstance_MechanicalEngineerPet::ULayerAnimInstance_MechanicalEngineerPet() {
    FrontendLocAlpha = 1;
    OwlFrameAlpha = 1;
    OwlPoseAlpha = 1;
    SkydiveForward = 1;
    ClosedAlpha = 1;
    AdditiveAlpha = 1;
    Closed_NewCurveValue = 1;
    GliderCurveValue = 1;
    WingCorrectiveAdditiveAlpha = 1;
    LocalVelocityRight = 1;
    bSwitchInterpSpeed = false;
    bGateCanPlayLanding = false;
    bGateWrenchTransition = false;
    bOwlIsOnPack = true;
    BlockAnimRule = false;
    bHideOwl = false;
    bDetachFromWrenchTransition = false;
    bSkydiveFreefall = false;
    bIsInLandingPhase = false;
    bCanPlayLandingAnim = false;
    bIsFrontEndContrails = false;
    bUseLayer = false;
    bUsingHangGliderSet = false;
    bUsingUmbrellaGliderSet = false;
    bTransition_ToSkydive = false;
    bTransition_ToClosed = false;
    bTransition_Detach_To_Dive = false;
    bTransition_Detach_To_Glide = false;
}

