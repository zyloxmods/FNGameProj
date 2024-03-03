#include "AthenaCarPlayerSlot.h"

FAthenaCarPlayerSlot::FAthenaCarPlayerSlot() {
    this->SoundOnEnter = NULL;
    this->SoundOnExit = NULL;
    this->AnimInstanceOverride = NULL;
    this->AnimLayerOverride = NULL;
    this->bUsePerSeatAnimInstanceOverride = false;
    this->bIsSelectable = false;
    this->bUseGroundMotion = false;
    this->bUseVehicleIsOnGround = false;
    this->bCanEmote = false;
    this->bCanCarryDBNOPlayer = false;
    this->bForceCrouch = false;
    this->bPlayEnterSoundForTransition = false;
    this->bPlayExitSoundForTransition = false;
    this->bIsPushDriver = false;
    this->bCanOnlyFireWhenTargeting = false;
    this->SlopeCompensationCameraOffset = 1;
    this->Player = NULL;
    this->Controller = NULL;
    this->PlayerEntryTime = 1;
    this->EnterSeatTime = 1;
    this->bConstrainPawnToSeatTransform = false;
    this->bConstrainPawnToSeatDuringTransitionMontage = false;
    this->bOffsetPlayerRelativeAttachLocation = false;
    this->bUseExitTimer = false;
    this->WeaponComponent = NULL;
    this->CameraPitchConstraint = 1;
    this->CameraYawConstraint = 1;
}

