#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ERespawnRequirements : uint8 
{
	NoRespawnOnly,
	Both,
	ERespawnRequirements_MAX,
};
