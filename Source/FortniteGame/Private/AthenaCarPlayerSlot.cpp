#include "AthenaCarPlayerSlot.h"

FAthenaCarPlayerSlot::FAthenaCarPlayerSlot() {
    SoundOnEnter = NULL;
    SoundOnExit = NULL;
    AnimInstanceOverride = NULL;
    AnimLayerOverride = NULL;
    bUsePerSeatAnimInstanceOverride = false;
    bIsSelectable = false;
    bUseGroundMotion = false;
    bUseVehicleIsOnGround = false;
    bCanEmote = false;
    bCanCarryDBNOPlayer = false;
    bForceCrouch = false;
    bPlayEnterSoundForTransition = false;
    bPlayExitSoundForTransition = false;
    bIsPushDriver = false;
    bCanOnlyFireWhenTargeting = false;
    SlopeCompensationCameraOffset = 1;
    Player = NULL;
    Controller = NULL;
    PlayerEntryTime = 1;
    EnterSeatTime = 1;
    bConstrainPawnToSeatTransform = false;
    bConstrainPawnToSeatDuringTransitionMontage = false;
    bOffsetPlayerRelativeAttachLocation = false;
    bUseExitTimer = false;
    WeaponComponent = NULL;
    CameraPitchConstraint = 1;
    CameraYawConstraint = 1;
}

