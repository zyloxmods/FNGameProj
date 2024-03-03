#pragma once
#include "CoreMinimal.h"
#include "EInventoryContentSortType.generated.h"

UENUM(BlueprintType)
enum class EInventoryContentSortType : uint8 {
    ByName,
    ByRating,
    ByLevel,
    ByCategory,
    ByRarity,
    ByLocation,
    ByPersonality,
    ByBonus,
    BySubtype,
    ByGrantTime,
    Invalid,
};

