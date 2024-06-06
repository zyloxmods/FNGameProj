#include "FortPetAnimInstance.h"


FGameplayTag UFortPetAnimInstance::TEMP_GetActiveTag() {
    return FGameplayTag{};
}

void UFortPetAnimInstance::ApplyOrRemoveFlagsFromEmote(const UFortMontageItemDefinitionBase* Emote, bool bApply) {
}

UFortPetAnimInstance::UFortPetAnimInstance() {
    LookAtAlpha = 1;
    LookAtTargetingSpeed = 1;
    LookAtOverride = 1;
    JumpAnimIndex = 0;
    SkydiveRollWhenFloating = 1;
    SkydiveRollWhenDiving = 1;
    SkydiveRollInterpSpeed = 1;
    DownSightsToLocomotionTimeRemaining = 1;
    FaceCurveOverrideValue = 1;
    bIsFlyingPet = false;
    HandIKAlpha = 1;
    LegIKAlpha = 1;
    bIsSlopeSliding = false;
    bIsJumpLandComplete = false;
    bIsZiplining = false;
    bIsBallooning = false;
    bIsFlying = false;
    bIsSurfaceSwimming = false;
    bIsInAirNotJumping = false;
    bUseSkydiveRotation = false;
    bIsSkydivingInGame = false;
    bIsTargeting = false;
    bIsDBNO = false;
    bIsHappy = false;
    bIsHunker = false;
    bIsFrontEndLobbyPartyMember = false;
    bIsOwnerPawnBeingControlledByNonPlayerAnimBP = false;
    bIsCrouching = false;
    bIsMoving2D = false;
    bIsLocomotion = false;
    bIsJogging = false;
    bIsSprinting = false;
    bIsCrouchSprinting = false;
    bIsCrouchMoving = false;
    bIsTargetingAndMoving = false;
    bTransition_LocomotionToIdle_To_Locomotion = false;
    bTransition_Locomotion_To_LocomotionToIdle = false;
    bTransition_JumpFall_To_Skydive = false;
    bTransition_JumpLand_To_Locomotion = false;
    bTransition_DownSightsToIdle_To_Locomotion = false;
    bTransition_Idle_IdleLobby = false;
    bTransition_Idle_Locomotion = false;
    bTransition_InnerIdle_IdleToHappy = false;
    bTransition_Locomotion_StartJump = false;
    bTransition_Locomotion_LocomotionHappy = false;
    bTransition_Crouch_CrouchToLocomotion = false;
    bTransition_Crouching_CrouchToIdle = false;
    bTransition_Crouching_CrouchToCrouchADSNotMoving = false;
    bTransition_CrouchToCrouchADSNotMoving_Crouching = false;
    bTransition_Skydive_Idle = false;
    bTransition_SkyDiveGliding_SkyDiveDiving = false;
    bTransition_Hunker_Idle = false;
    bTransition_Hunker_Locomotion = false;
    bTransition_Hunker_HunkerToCrouch = false;
    bTransition_DownSights_ADSToCrouch = false;
    bTransition_DownSights_DownSightsToIdle = false;
    bTransition_CrouchWalkingDownSights_DownSights = false;
    bTransition_IdleLobby_Idle = false;
    bTransition_FrontEndSkydive_LobbyHunker = false;
    bTransition_FrontEndSkydive_IdleLobby = false;
    bTransition_LobbyHunker_HunkerToLobby = false;
    bTransition_Happy_HappyToIdle = false;
    bTransition_Happy_HappyToCrouchInternal = false;
    bTransition_ParachuteToSkydiveGlide_Skydive = false;
    bEmotePlaying_WhereHunkeringIsBest = false;
    bEmotePlaying_WhereHappyIsBest = false;
    bResponse_ShouldBeHappy = false;
    LastObservedFrontEndEmote = NULL;
}

