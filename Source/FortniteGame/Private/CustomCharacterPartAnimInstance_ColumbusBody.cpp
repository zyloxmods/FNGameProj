#include "CustomCharacterPartAnimInstance_ColumbusBody.h"

UCustomCharacterPartAnimInstance_ColumbusBody::UCustomCharacterPartAnimInstance_ColumbusBody() {
    ThighRotationRightDynamicsAlpha = 1;
    ThighRotationLeftDynamicsAlpha = 1;
    ThighRotationRightAlpha = 1;
    ThighRotationLeftAlpha = 1;
    ClavicleRotationRightAlpha = 1;
    ClavicleRotationLeftAlpha = 1;
    PickaxeSwingPositionLeftPositiveAlpha = 1;
    PickaxeSwingPositionLeftNegativeAlpha = 1;
    PickaxeSwingPositionRightPositiveAlpha = 1;
    PickaxeSwingPositionRightNegativeAlpha = 1;
    ChestArmorDynamicsAlpha = 1;
    ChestArmorDynamicsInvAlpha = 1;
    ChestArmorDynamicsClavicleLeftInvAlpha = 1;
    ChestArmorDynamicsClavicleRightInvAlpha = 1;
    CrouchMoveAlpha = 1;
    UpperArmLeftSwingAlpha = 1;
    SkydivingAlpha = 1;
    SpinePositivePitchAlpha = 1;
    bChestDynamicsDisableRB = false;
    bIsCrouchMoving = false;
    bIsAboveLODThreshold = false;
    bShouldResetDynamics = true;
}

