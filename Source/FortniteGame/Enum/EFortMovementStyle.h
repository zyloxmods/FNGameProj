#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortMovementStyle : uint8 
{
	Walking,
	Charging,
	Sprinting,
	PersonalVehicle,
	Flying,
	Tethered,
	Burrowing,
	EFortMovementStyle_MAX,
};
