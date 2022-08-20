#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EPlayerIndicatorFlags : uint8 
{
	Minimap,
	WorldArrow,
	WorldName,
	DBNOCountDown,
	EPlayerIndicatorFlags_MAX,
};
