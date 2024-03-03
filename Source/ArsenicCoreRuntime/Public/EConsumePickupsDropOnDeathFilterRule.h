#pragma once
#include "CoreMinimal.h"
#include "EConsumePickupsDropOnDeathFilterRule.generated.h"

UENUM(BlueprintType)
enum class EConsumePickupsDropOnDeathFilterRule : uint8 {
    DiscardLowestRarityItem,
    DiscardHighestRarityItem,
};

