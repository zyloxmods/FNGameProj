#include "LayerAnimInstance_MechanicalEngineerPet.h"

ULayerAnimInstance_MechanicalEngineerPet::ULayerAnimInstance_MechanicalEngineerPet() {
    this->FrontendLocAlpha = 1;
    this->OwlFrameAlpha = 1;
    this->OwlPoseAlpha = 1;
    this->SkydiveForward = 1;
    this->ClosedAlpha = 1;
    this->AdditiveAlpha = 1;
    this->Closed_NewCurveValue = 1;
    this->GliderCurveValue = 1;
    this->WingCorrectiveAdditiveAlpha = 1;
    this->LocalVelocityRight = 1;
    this->bSwitchInterpSpeed = false;
    this->bGateCanPlayLanding = false;
    this->bGateWrenchTransition = false;
    this->bOwlIsOnPack = true;
    this->BlockAnimRule = false;
    this->bHideOwl = false;
    this->bDetachFromWrenchTransition = false;
    this->bSkydiveFreefall = false;
    this->bIsInLandingPhase = false;
    this->bCanPlayLandingAnim = false;
    this->bIsFrontEndContrails = false;
    this->bUseLayer = false;
    this->bUsingHangGliderSet = false;
    this->bUsingUmbrellaGliderSet = false;
    this->bTransition_ToSkydive = false;
    this->bTransition_ToClosed = false;
    this->bTransition_Detach_To_Dive = false;
    this->bTransition_Detach_To_Glide = false;
}

