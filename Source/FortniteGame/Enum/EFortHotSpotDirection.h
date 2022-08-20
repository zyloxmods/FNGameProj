#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortHotSpotDirection : uint8 
{
	NegativeX,
	PositiveY,
	NegativeY,
	PositiveZ,
	NegativeZ,
	Any,
	EFortHotSpotDirection_MAX,
};
