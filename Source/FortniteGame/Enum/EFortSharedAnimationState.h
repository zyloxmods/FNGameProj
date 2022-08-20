#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortSharedAnimationState : uint8 
{
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
	Anim_MAX,
};
