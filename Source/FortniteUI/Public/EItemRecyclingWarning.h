#pragma once
#include "CoreMinimal.h"
#include "EItemRecyclingWarning.generated.h"

UENUM(BlueprintType)
enum class EItemRecyclingWarning : uint8 {
    HighLevel,
    HighRarity,
    CanSlotInCollectionBook,
};

