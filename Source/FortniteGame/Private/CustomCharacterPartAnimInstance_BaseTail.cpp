#include "CustomCharacterPartAnimInstance_BaseTail.h"

UCustomCharacterPartAnimInstance_BaseTail::UCustomCharacterPartAnimInstance_BaseTail() {
    this->TailSkydiveLean = 1;
    this->TailDiveSpeed = 1;
    this->TailSkydiveYaw = 1;
    this->SpeedAdjustedPlayrate = 1;
    this->bIsInShoppingCartSprinting = false;
    this->bIsInShoppingCartMoving = false;
    this->bIsInShoppingCartCoasting = false;
    this->bIsInShoppingCartInAir = false;
    this->bIsHoverboardJumping = false;
    this->bIsHoverboardLanding = false;
    this->bIsWearingCape = false;
    this->bBlendInBackwardPose = false;
    this->bTransition_Idle_Locomotion = false;
    this->bTransition_Locomotion_Idle = false;
    this->bTransition_Idle_Skydive = false;
    this->bTransition_Idle_Crouching = false;
    this->bTransition_Skydive_Idle = false;
    this->bTransition_StartJump_SkyDive = false;
    this->bTransition_JumpLoop_Idle = false;
    this->bTransition_DownSights_Conduit_DownSightsToIdle = false;
    this->bTransition_Crouching_Locomotion = false;
    this->bShoppingCartSprint_Or_Sprint = false;
    this->bIsFalling_Or_IsJumping_Or_IsShoppingCartInAir = false;
    this->bIsFalling_Or_IsHoverboardJumping = false;
}

