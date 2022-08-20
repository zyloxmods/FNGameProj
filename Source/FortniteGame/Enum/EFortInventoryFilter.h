#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortInventoryFilter : uint8 
{
	WeaponRanged,
	Ammo,
	Traps,
	Consumables,
	Ingredients,
	Gadget,
	Decorations,
	Badges,
	Heroes,
	LeadSurvivors,
	Survivors,
	Defenders,
	Resources,
	ConversionControl,
	AthenaCosmetics,
	Playset,
	CreativePlot,
	TeamPerk,
	Workers,
	Invisible,
	Max_None,
	EFortInventoryFilter_MAX,
};
