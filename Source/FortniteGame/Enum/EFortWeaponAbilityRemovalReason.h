#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortWeaponAbilityRemovalReason : uint8 
{
	EndPlay,
	Unequipped,
	INVALID_MAX,
	EFortWeaponAbilityRemovalReason_MAX,
};
