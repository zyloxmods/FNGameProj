#include "FortAIAnimInstance.h"

UFortAIAnimInstance::UFortAIAnimInstance() {
    this->Speed = 0.00f;
    this->UpwardVelocity = 0.00f;
    this->MovementDirection = 0.00f;
    this->LowerBodyCurrentWeight = 0.00f;
    this->LowerBodyBlendTime = 1.00f;
    this->RunVariation = 0;
    this->WalkVariation = 0;
    this->MovementStyle = EFortMovementStyle::Running;
    this->BlockGetUp = false;
    this->bIsStunned = false;
    this->bIsKnockedback = false;
    this->bIsStaggered = false;
    this->bIsSleeping = false;
    this->bIsDBNO = false;
    this->bIsDead = false;
    this->bIsSprinting = false;
    this->bIsCowering = false;
    this->bHasWeapon = false;
    this->bAdditiveHitReactLoop = false;
    this->bUseAltSleepAnim = false;
    this->bShouldUseMovementLocomotion = false;
    this->bCanLookAtAimTarget = false;
    this->bIsTargeting = false;
    this->bTransitionToIdle = false;
    this->WeaponCoreAnimation = EFortWeaponCoreAnimation::Melee;
}

