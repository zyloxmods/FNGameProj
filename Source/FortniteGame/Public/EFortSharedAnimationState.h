#pragma once
#include "CoreMinimal.h"
#include "EFortSharedAnimationState.generated.h"

UENUM(BlueprintType)
enum class EFortSharedAnimationState : uint8 {
    Anim_Walk,
    Anim_Run,
    Anim_Turn,
    Anim_Attack,
    Anim_Death,
    Anim_Knockback,
    Anim_FullBodyHit,
    Anim_Pushed,
    Anim_Dance,
    Anim_Idle,
    Anim_RangedAttack,
    Anim_MAX UMETA(Hidden),
};

