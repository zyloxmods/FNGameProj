#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortAbilityTargetingSource : uint8 
{
	PawnForward,
	PawnTowardsFocus,
	WeaponForward,
	WeaponTowardsFocus,
	Custom,
	Max_None,
	EFortAbilityTargetingSource_MAX,
};
