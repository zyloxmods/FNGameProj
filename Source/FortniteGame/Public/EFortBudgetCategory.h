#pragma once
#include "CoreMinimal.h"
#include "EFortBudgetCategory.generated.h"

UENUM(BlueprintType)
enum class EFortBudgetCategory : uint8 {
    Memory,
    Simulation,
    Rendering,
    Network,
    Audio,
    Max,
};

