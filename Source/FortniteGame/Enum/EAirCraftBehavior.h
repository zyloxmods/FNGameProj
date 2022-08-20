#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EAirCraftBehavior : uint8 
{
	OpposingAirCraftForEachTeam,
	FlyTowardFirstCircleCenter,
	NoAircraft,
	EAirCraftBehavior_MAX,
};
