#include "GliderAnimInstance_MechanicalEngineerGlider.h"

UGliderAnimInstance_MechanicalEngineerGlider::UGliderAnimInstance_MechanicalEngineerGlider() {
    FlapBS = NULL;
    FlapPlayRate = 1;
    FeatherSpeed = 1;
    DeployAnimAlpha = 1;
    WingPoseAdditiveAlpha = 1;
    BackPackPoseCurveValue = 1;
    BackpackCurveValue = 1;
    bBackpacksMatch = false;
    bIsCosmeticPreview = false;
    bUseClosedFromPack = false;
    bHideBackpackOwl = false;
    bSkydiveFreefall = false;
    bTransition_Closed_To_OpenIntoGliderItem = false;
    bTransition_Closed_To_OpenIntoGeyserVent = false;
    bTransition_Closed_To_OpenInto = false;
    bTransition_IdleOpen_To_Flap = false;
    bTransition_To_Closed = false;
    bTransition_OpenInto_To_Flap = false;
    bFlapGateIsAccelerating = false;
    bFlapGateIsNotAccelerating = false;
    bGateFlapEnable = false;
    bGateLookoff = false;
    bGateBlinkOff = false;
    bCanFlap = false;
    bIsFlapping = false;
    bCanFlapTransition = false;
    bCanLook = false;
    bCanCaw = false;
    bCanBlink = false;
}

