#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortEncounterSpawnLimitType : uint8 
{
	NumPawnsLimit,
	SpawnPointLimit,
	UserDefined,
	MAX,
};
