#include "FortCharacterLayerAnimInstance_STWPlayer.h"

UFortCharacterLayerAnimInstance_STWPlayer::UFortCharacterLayerAnimInstance_STWPlayer() {
    this->LeanAdditiveAlpha = 1;
    this->LeanAngle = 1;
    this->Speed2D = 1;
    this->LocalVelocityYawAngle = 1;
    this->Gender = EFortCustomGender::Invalid;
    this->bIsSlopeSliding = false;
    this->bIsOnGround = false;
    this->bLandingPredicted = false;
    this->bIsFalling = false;
    this->bIsJumping = false;
}

