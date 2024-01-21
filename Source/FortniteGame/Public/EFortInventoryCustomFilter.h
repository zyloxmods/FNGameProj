#pragma once
#include "CoreMinimal.h"
#include "EFortInventoryCustomFilter.generated.h"

UENUM(BlueprintType)
enum class EFortInventoryCustomFilter : uint8 {
    Mythic,
    Legendary,
    Epic,
    Rare,
    Uncommon,
    Common,
};

