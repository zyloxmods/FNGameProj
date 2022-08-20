#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortAIWeaponUsage : uint8 
{
	UsesRangedWeapon,
	UsesMeleeWeapon,
	EFortAIWeaponUsage_MAX,
};
