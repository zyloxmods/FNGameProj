#pragma once
#include "CoreMinimal.h"
#include "EVideoManagerJobTypes.generated.h"

UENUM(BlueprintType)
enum class EVideoManagerJobTypes : uint8 {
    EliminationExtraction,
    DefinedShotSequence,
};

