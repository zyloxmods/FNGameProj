#include "GliderAnimInstance_MechanicalEngineerGlider.h"

UGliderAnimInstance_MechanicalEngineerGlider::UGliderAnimInstance_MechanicalEngineerGlider() {
    this->FlapBS = NULL;
    this->FlapPlayRate = 1;
    this->FeatherSpeed = 1;
    this->DeployAnimAlpha = 1;
    this->WingPoseAdditiveAlpha = 1;
    this->BackPackPoseCurveValue = 1;
    this->BackpackCurveValue = 1;
    this->bBackpacksMatch = false;
    this->bIsCosmeticPreview = false;
    this->bUseClosedFromPack = false;
    this->bHideBackpackOwl = false;
    this->bSkydiveFreefall = false;
    this->bTransition_Closed_To_OpenIntoGliderItem = false;
    this->bTransition_Closed_To_OpenIntoGeyserVent = false;
    this->bTransition_Closed_To_OpenInto = false;
    this->bTransition_IdleOpen_To_Flap = false;
    this->bTransition_To_Closed = false;
    this->bTransition_OpenInto_To_Flap = false;
    this->bFlapGateIsAccelerating = false;
    this->bFlapGateIsNotAccelerating = false;
    this->bGateFlapEnable = false;
    this->bGateLookoff = false;
    this->bGateBlinkOff = false;
    this->bCanFlap = false;
    this->bIsFlapping = false;
    this->bCanFlapTransition = false;
    this->bCanLook = false;
    this->bCanCaw = false;
    this->bCanBlink = false;
}

