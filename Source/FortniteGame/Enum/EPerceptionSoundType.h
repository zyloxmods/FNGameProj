#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EPerceptionSoundType : uint8 
{
	Explosion,
	ProjectileFlyBy,
	ProjectileImpact,
	WeaponFiring,
	Building,
	MeleeImpact,
	MAX,
};
