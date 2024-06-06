#include "CustomCharacterPartAnimInstance_BaseTail.h"

UCustomCharacterPartAnimInstance_BaseTail::UCustomCharacterPartAnimInstance_BaseTail() {
    TailSkydiveLean = 1;
    TailDiveSpeed = 1;
    TailSkydiveYaw = 1;
    SpeedAdjustedPlayrate = 1;
    bIsInShoppingCartSprinting = false;
    bIsInShoppingCartMoving = false;
    bIsInShoppingCartCoasting = false;
    bIsInShoppingCartInAir = false;
    bIsHoverboardJumping = false;
    bIsHoverboardLanding = false;
    bIsWearingCape = false;
    bBlendInBackwardPose = false;
    bTransition_Idle_Locomotion = false;
    bTransition_Locomotion_Idle = false;
    bTransition_Idle_Skydive = false;
    bTransition_Idle_Crouching = false;
    bTransition_Skydive_Idle = false;
    bTransition_StartJump_SkyDive = false;
    bTransition_JumpLoop_Idle = false;
    bTransition_DownSights_Conduit_DownSightsToIdle = false;
    bTransition_Crouching_Locomotion = false;
    bShoppingCartSprint_Or_Sprint = false;
    bIsFalling_Or_IsJumping_Or_IsShoppingCartInAir = false;
    bIsFalling_Or_IsHoverboardJumping = false;
}

