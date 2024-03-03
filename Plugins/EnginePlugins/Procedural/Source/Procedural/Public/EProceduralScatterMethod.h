#pragma once
#include "CoreMinimal.h"
#include "EProceduralScatterMethod.generated.h"

UENUM(BlueprintType)
enum class EProceduralScatterMethod : uint8 {
    Density,
    SourcePoints,
    Grid,
};

