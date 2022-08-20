#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EPlayerIndicatorDisplayMode : uint8 
{
	TeamOnly,
	Enemies,
	Anyone,
	Never,
	EPlayerIndicatorDisplayMode_MAX,
};
