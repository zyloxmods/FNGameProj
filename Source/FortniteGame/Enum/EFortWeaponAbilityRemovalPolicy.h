#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortWeaponAbilityRemovalPolicy : uint8 
{
	Remove,
	Persist,
	EFortWeaponAbilityRemovalPolicy_MAX,
};
