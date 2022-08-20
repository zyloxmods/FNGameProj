#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortCraftFailCause : uint8 
{
	NotEnoughResources,
	InventoryFull,
	InsufficientTeamLevel,
	CraftingQueueFull,
	CurrentlyLocked,
	OverflowSchematic,
	EFortCraftFailCause_MAX,
};
