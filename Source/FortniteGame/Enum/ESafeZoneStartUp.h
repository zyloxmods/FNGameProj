#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ESafeZoneStartUp : uint8 
{
	StartsWithWarmUp,
	StartsWithAirCraft,
	StartsWithNoAirCraft,
	ESafeZoneStartUp_MAX,
};
