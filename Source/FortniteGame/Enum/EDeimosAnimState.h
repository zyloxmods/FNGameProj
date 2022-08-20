#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EDeimosAnimState : uint8 
{
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
	EDeimosAnimState_MAX,
};
