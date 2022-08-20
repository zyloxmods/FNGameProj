#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EUpdateCustomDepthOptimDirtyFlags : uint8 
{
	CharacterParts,
	Weapon,
	EUpdateCustomDepthOptimDirtyFlags_MAX,
};
