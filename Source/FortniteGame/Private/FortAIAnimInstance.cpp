#include "FortAIAnimInstance.h"

void UFortAIAnimInstance::AnimNotify_SleepingFullyBlended(const UAnimNotify* Notify) {
}

UFortAIAnimInstance::UFortAIAnimInstance() {
    this->Speed = 1;
    this->UpwardVelocity = 1;
    this->MovementDirection = 1;
    this->LowerBodyCurrentWeight = 1;
    this->LowerBodyBlendTime = 1;
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

