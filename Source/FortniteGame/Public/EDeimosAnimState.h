#pragma once
#include "CoreMinimal.h"
#include "EDeimosAnimState.generated.h"

UENUM(BlueprintType)
enum class EDeimosAnimState : uint8 {
    Idle,
    Running,
    Attack,
    Dance,
    Dying,
    Died,
    FullBodyHitReact,
    AdditiveHitReact,
    ActiveIdle,
    Falling,
    Frozen,
    RangedAttack,
    Walking,
    Sprinting,
};

