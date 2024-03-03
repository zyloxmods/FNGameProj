#pragma once
#include "CoreMinimal.h"
#include "EFareGenerationMethod.generated.h"

UENUM(BlueprintType)
enum class EFareGenerationMethod : uint8 {
    Distance,
    POI,
    MAX,
};

