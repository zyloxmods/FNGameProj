#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EAthenaLootDropOverride : uint8 
{
	ForceDrop,
	ForceKeep,
	ForceDestroy,
	ForceDropUnlessRespawning,
	ForceDestroyUnlessRespawning,
	DropUnlessTeamSelectionUpdated,
	EAthenaLootDropOverride_MAX,
};
