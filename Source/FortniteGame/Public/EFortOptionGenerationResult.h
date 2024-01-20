#pragma once
#include "CoreMinimal.h"
#include "EFortOptionGenerationResult.generated.h"

UENUM(BlueprintType)
enum class EFortOptionGenerationResult : uint8 {
    NoOptionsGenerated,
    NewOptionsGenerated,
    ExistingOptionsGenerated,
};

