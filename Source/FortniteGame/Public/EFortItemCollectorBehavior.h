#pragma once
#include "CoreMinimal.h"
#include "EFortItemCollectorBehavior.generated.h"

UENUM(BlueprintType)
enum class EFortItemCollectorBehavior : uint8 {
    FirstToGoal,
    FreeForAll,
};

