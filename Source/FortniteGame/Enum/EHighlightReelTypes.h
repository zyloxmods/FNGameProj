#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EHighlightReelTypes : uint8 
{
	GameSummary,
	ExtendedGameSummary,
	Builder,
	FastMover,
	LongDistance,
	Multikill,
	StormCloud,
	EHighlightReelTypes_MAX,
};
