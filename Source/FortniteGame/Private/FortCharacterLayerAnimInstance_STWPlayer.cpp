#include "FortCharacterLayerAnimInstance_STWPlayer.h"

UFortCharacterLayerAnimInstance_STWPlayer::UFortCharacterLayerAnimInstance_STWPlayer() {
    LeanAdditiveAlpha = 1;
    LeanAngle = 1;
    Speed2D = 1;
    LocalVelocityYawAngle = 1;
    Gender = EFortCustomGender::Invalid;
    bIsSlopeSliding = false;
    bIsOnGround = false;
    bLandingPredicted = false;
    bIsFalling = false;
    bIsJumping = false;
}

