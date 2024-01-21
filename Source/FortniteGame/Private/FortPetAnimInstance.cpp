#include "FortPetAnimInstance.h"


FGameplayTag UFortPetAnimInstance::TEMP_GetActiveTag() {
    return FGameplayTag{};
}

void UFortPetAnimInstance::ApplyOrRemoveFlagsFromEmote(const UFortMontageItemDefinitionBase* Emote, bool bApply) {
}

UFortPetAnimInstance::UFortPetAnimInstance() {
    this->LookAtAlpha = 0.00f;
    this->LookAtTargetingSpeed = 12.00f;
    this->JumpAnimIndex = 0;
    this->SkydiveRollWhenFloating = 0.00f;
    this->SkydiveRollWhenDiving = 0.00f;
    this->SkydiveRollInterpSpeed = 0.00f;
    this->bIsFlyingPet = false;
    this->bIsOnGround = false;
    this->bIsSlopeSliding = false;
    this->bIsJumpLandComplete = false;
    this->bIsZiplining = false;
    this->bIsBallooning = false;
    this->bIsFlying = false;
    this->bIsInAirNotJumping = false;
    this->bUseSkydiveRotation = false;
    this->bIsSkydivingInGame = false;
    this->bIsTargeting = false;
    this->bIsDBNO = false;
    this->bIsHappy = false;
    this->bIsHunker = false;
    this->bIsFrontEndLobbyPartyMember = false;
    this->bIsOwnerPawnBeingControlledByNonPlayerAnimBP = false;
    this->bIsCrouching = false;
    this->bIsMoving2D = false;
    this->bIsLocomotion = false;
    this->bIsJogging = false;
    this->bIsSprinting = false;
    this->bIsCrouchSprinting = false;
    this->bIsCrouchMoving = false;
    this->bIsTargetingAndMoving = false;
    this->bTransition_Idle_IdleLobby = false;
    this->bTransition_Idle_Locomotion = false;
    this->bTransition_InnerIdle_IdleToHappy = false;
    this->bTransition_Locomotion_StartJump = false;
    this->bTransition_Locomotion_LocomotionHappy = false;
    this->bTransition_Crouch_CrouchToLocomotion = false;
    this->bTransition_Crouching_CrouchToIdle = false;
    this->bTransition_Crouching_CrouchToCrouchADSNotMoving = false;
    this->bTransition_CrouchToCrouchADSNotMoving_Crouching = false;
    this->bTransition_SkyDive_Idle = false;
    this->bTransition_SkyDiveGliding_SkyDiveDiving = false;
    this->bTransition_Hunker_Idle = false;
    this->bTransition_Hunker_Locomotion = false;
    this->bTransition_Hunker_HunkerToCrouch = false;
    this->bTransition_DownSights_ADSToCrouch = false;
    this->bTransition_DownSights_DownSightsToIdle = false;
    this->bTransition_CrouchWalkingDownSights_DownSights = false;
    this->bTransition_IdleLobby_Idle = false;
    this->bTransition_FrontEndSkydive_LobbyHunker = false;
    this->bTransition_FrontEndSkydive_IdleLobby = false;
    this->bTransition_LobbyHunker_HunkerToLobby = false;
    this->bEmotePlaying_WhereHunkeringIsBest = false;
    this->bEmotePlaying_WhereHappyIsBest = false;
    this->bResponse_ShouldBeHappy = false;
    this->LastObservedFrontEndEmote = NULL;
}

