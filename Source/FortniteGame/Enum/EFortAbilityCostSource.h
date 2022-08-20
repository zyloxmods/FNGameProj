#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortAbilityCostSource : uint8 
{
	Durability,
	AmmoMagazine,
	AmmoPrimary,
	Item,
	EFortAbilityCostSource_MAX,
};
