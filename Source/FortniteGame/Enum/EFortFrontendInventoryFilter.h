#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortFrontendInventoryFilter : uint8 
{
	WorldItems,
	WorldItemsInGame,
	WorldItemsStorage,
	WorldItemsTransfer,
	ConsumablesAndAccountResources,
	Heroes,
	Defenders,
	Survivors,
	AthenaCharacter,
	AthenaBackpack,
	AthenaPickaxe,
	AthenaGliders,
	AthenaContrails,
	AthenaEmotes,
	AthenaItemWraps,
	AthenaLoadingScreens,
	AthenaLobbyMusic,
	AthenaCharm,
	HestiaWeapons,
	HestiaResources,
	StarlightInventory,
	Invisible,
	Max_None,
	EFortFrontendInventoryFilter_MAX,
};
