#pragma once
#include "CoreMinimal.h"
#include "EProceduralScatterTileRandomGenerator.generated.h"

UENUM(BlueprintType)
enum class EProceduralScatterTileRandomGenerator : uint8 {
    PseudoRandom,
    HaltonSequence,
};

