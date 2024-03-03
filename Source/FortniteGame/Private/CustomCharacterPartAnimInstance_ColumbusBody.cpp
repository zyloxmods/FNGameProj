#include "CustomCharacterPartAnimInstance_ColumbusBody.h"

UCustomCharacterPartAnimInstance_ColumbusBody::UCustomCharacterPartAnimInstance_ColumbusBody() {
    this->ThighRotationRightDynamicsAlpha = 1;
    this->ThighRotationLeftDynamicsAlpha = 1;
    this->ThighRotationRightAlpha = 1;
    this->ThighRotationLeftAlpha = 1;
    this->ClavicleRotationRightAlpha = 1;
    this->ClavicleRotationLeftAlpha = 1;
    this->PickaxeSwingPositionLeftPositiveAlpha = 1;
    this->PickaxeSwingPositionLeftNegativeAlpha = 1;
    this->PickaxeSwingPositionRightPositiveAlpha = 1;
    this->PickaxeSwingPositionRightNegativeAlpha = 1;
    this->ChestArmorDynamicsAlpha = 1;
    this->ChestArmorDynamicsInvAlpha = 1;
    this->ChestArmorDynamicsClavicleLeftInvAlpha = 1;
    this->ChestArmorDynamicsClavicleRightInvAlpha = 1;
    this->CrouchMoveAlpha = 1;
    this->UpperArmLeftSwingAlpha = 1;
    this->SkydivingAlpha = 1;
    this->SpinePositivePitchAlpha = 1;
    this->bChestDynamicsDisableRB = false;
    this->bIsCrouchMoving = false;
    this->bIsAboveLODThreshold = false;
    this->bShouldResetDynamics = true;
}

