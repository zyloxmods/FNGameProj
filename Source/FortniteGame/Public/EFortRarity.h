#pragma once
#include "CoreMinimal.h"
#include "EFortRarity.generated.h"

UENUM(BlueprintType)
enum class EFortRarity : uint8 {
    Common,
    Uncommon,
    Rare,
    Epic,
    Legendary,
    Mythic,
    Transcendent,
    Unattainable,
    NumRarityValues,
};

