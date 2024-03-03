#pragma once
#include "CoreMinimal.h"
#include "EHighlightReelTypes.generated.h"

UENUM(BlueprintType)
enum class EHighlightReelTypes : uint8 {
    Generic,
    GameSummary,
    ExtendedGameSummary,
    Builder,
    FastMover,
    LongDistance,
    Multikill,
    StormCloud,
};

