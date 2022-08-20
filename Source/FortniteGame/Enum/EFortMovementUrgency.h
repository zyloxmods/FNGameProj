#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortMovementUrgency : uint8 
{
	Low,
	Medium,
	High,
	NumLevels,
	EFortMovementUrgency_MAX,
};
