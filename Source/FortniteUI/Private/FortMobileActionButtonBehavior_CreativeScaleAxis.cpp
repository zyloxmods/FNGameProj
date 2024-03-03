#include "FortMobileActionButtonBehavior_CreativeScaleAxis.h"

void UFortMobileActionButtonBehavior_CreativeScaleAxis::HandleWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PreviousWeapon) {
}

void UFortMobileActionButtonBehavior_CreativeScaleAxis::HandleMoveToolScaleAxisChanged(EScaleAxis Axis) {
}

UFortMobileActionButtonBehavior_CreativeScaleAxis::UFortMobileActionButtonBehavior_CreativeScaleAxis() {
    this->GrowSprite = NULL;
    this->WidthResizeSprite = NULL;
    this->HeightResizeSprite = NULL;
    this->DepthResizeSprite = NULL;
}

