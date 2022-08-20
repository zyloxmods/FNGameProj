#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortWeaponUpgradeInteractionResult : uint8 
{
	NotEnoughResources,
	CannotUpgrade,
	CannotInteract,
	EFortWeaponUpgradeInteractionResult_MAX,
};
