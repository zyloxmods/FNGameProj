#include "FortAIAnimInstance.h"

void UFortAIAnimInstance::AnimNotify_SleepingFullyBlended(const UAnimNotify* Notify) {
}

UFortAIAnimInstance::UFortAIAnimInstance() {
    Speed = 1;
    UpwardVelocity = 1;
    MovementDirection = 1;
    LowerBodyCurrentWeight = 1;
    LowerBodyBlendTime = 1;
    RunVariation = 0;
    WalkVariation = 0;
    MovementStyle = EFortMovementStyle::Running;
    BlockGetUp = false;
    bIsStunned = false;
    bIsKnockedback = false;
    bIsStaggered = false;
    bIsSleeping = false;
    bIsDBNO = false;
    bIsDead = false;
    bIsSprinting = false;
    bIsCowering = false;
    bHasWeapon = false;
    bAdditiveHitReactLoop = false;
    bUseAltSleepAnim = false;
    bShouldUseMovementLocomotion = false;
    bCanLookAtAimTarget = false;
    bIsTargeting = false;
    bTransitionToIdle = false;
    WeaponCoreAnimation = EFortWeaponCoreAnimation::Melee;
}

