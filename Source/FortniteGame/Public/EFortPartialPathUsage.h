#pragma once
#include "CoreMinimal.h"
#include "EFortPartialPathUsage.generated.h"

UENUM(BlueprintType)
enum class EFortPartialPathUsage : uint8 {
    Always,
    OnlyGoalsOnDestructible,
    Never,
};

