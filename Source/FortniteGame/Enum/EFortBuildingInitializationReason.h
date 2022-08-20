#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortBuildingInitializationReason : uint8 
{
	Spawned,
	Replaced,
	LoadedFromSave,
	DynamicBuilderPlaced,
	PlacementTool,
	TrapTool,
	None,
	EFortBuildingInitializationReason_MAX,
};
