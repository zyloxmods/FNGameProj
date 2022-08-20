#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortSafeZoneState : uint8 
{
	Starting,
	Holding,
	Shrinking,
	EFortSafeZoneState_MAX,
};
