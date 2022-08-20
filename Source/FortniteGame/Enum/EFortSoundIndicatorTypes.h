#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortSoundIndicatorTypes : uint8 
{
	FootStep,
	Gunshot,
	Chest,
	Glider,
	Vehicle,
	COUNT,
	EFortSoundIndicatorTypes_MAX,
};
