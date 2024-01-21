#pragma once
#include "CoreMinimal.h"
#include "EFortItemCountStyle.generated.h"

UENUM(BlueprintType)
enum class EFortItemCountStyle : uint8 {
    StackCount,
    OverrideCount,
    StackCountOverOverride,
};

