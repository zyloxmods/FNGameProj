#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"

UENUM()
enum class EFortInventoryFilter : uint8
{
	WeaponMelee = 0,
	WeaponRanged = 1,
	Ammo = 2,
	Traps = 3,
	Consumables = 4,
	Ingredients = 5,
	Gadget = 6,
	Decorations = 7,
	Badges = 8,
	Heroes = 9,
	LeadSurvivors = 10,
	Survivors = 11,
	Defenders = 12,
	Resources = 13,
	ConversionControl = 14,
	AthenaCosmetics = 15,
	Playset = 16,
	CreativePlot = 17,
	TeamPerk = 18,
	Workers = 19,
	Invisible = 20,
	Max_None = 21,
	EFortInventoryFilter_MAX = 22
};