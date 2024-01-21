#include "AthenaCarPlayerSlot.h"

FAthenaCarPlayerSlot::FAthenaCarPlayerSlot() {
    this->SoundOnEnter = NULL;
    this->SoundOnExit = NULL;
    this->bIsSelectable = false;
    this->bUseGroundMotion = false;
    this->bUseVehicleIsOnGround = false;
    this->bCanEmote = false;
    this->bForceCrouch = false;
    this->SlopeCompensationCameraOffset = 0.00f;
    this->Player = NULL;
    this->Controller = NULL;
    this->PlayerEntryTime = 0.00f;
    this->EnterSeatTime = 0.00f;
    this->bConstrainPawnToSeatTransform = false;
    this->bOffsetPlayerRelativeAttachLocation = false;
    this->bUseExitTimer = false;
    this->WeaponComponent = NULL;
}

