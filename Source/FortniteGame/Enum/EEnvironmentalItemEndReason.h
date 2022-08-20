#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EEnvironmentalItemEndReason : uint8 
{
	PlayerExit,
	PlayerDeath,
	ObjectDestroyed,
	EEnvironmentalItemEndReason_MAX,
};
