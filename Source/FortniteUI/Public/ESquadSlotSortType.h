#pragma once
#include "CoreMinimal.h"
#include "ESquadSlotSortType.generated.h"

UENUM(BlueprintType)
enum class ESquadSlotSortType : uint8 {
    ByRating,
    ByLevel,
    ByRarity,
    ByBonus,
    ByMatch,
};

