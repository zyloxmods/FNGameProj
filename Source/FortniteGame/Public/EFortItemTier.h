#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"

UENUM()
enum class EFortItemTier : uint8
{
	No_Tier = 0,
	I = 1,
	II = 2,
	III = 3,
	IV = 4,
	V = 5,
	VI = 6,
	VII = 7,
	VIII = 8,
	IX = 9,
	X = 10,
	NumItemTierValues = 11,
	EFortItemTier_MAX = 12
};

UENUM()
enum class EFortDisplayTier : uint8
{
	Invalid = 0,
	Handmade = 1,
	Copper = 2,
	Silver = 3,
	Malachite = 4,
	Obsidian = 5,
	Brightcore = 6,
	Spectrolite = 7,
	Shadowshard = 8,
	Sunbeam = 9,
	Moonglow = 10,
	EFortDisplayTier_MAX = 11
};