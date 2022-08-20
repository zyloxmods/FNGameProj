#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortFoleyHitAudioType : uint8 
{
	Shield,
	Crit,
	Death,
	DeathCrit,
	Fall,
	FallDeath,
	Max_None,
	EFortFoleyHitAudioType_MAX,
};
