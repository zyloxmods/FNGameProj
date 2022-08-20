#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EGyroActiveMode : uint8 
{
	AimDownSightsOrFiring,
	ADSOrFiring,
	ADSOrFiringOrHarvestEquipped,
	All,
	EGyroActiveMode_MAX,
};
