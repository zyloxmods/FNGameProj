#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortBuildingDestroyedReason : uint8 
{
	WeaponDamage,
	LostSupport,
	Edit,
	FireDirect,
	FireIndirect,
	EFortBuildingDestroyedReason_MAX,
};
