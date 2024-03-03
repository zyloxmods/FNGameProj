#pragma once
#include "CoreMinimal.h"
#include "EItemEvolutionRestrictionReason.generated.h"

UENUM(BlueprintType)
enum class EItemEvolutionRestrictionReason : uint8 {
    NoEvolutions,
    BelowMaximumLevel,
    VaultOverflow,
    MissingCatalyst,
    MissingCosts,
    NoRarityUpgrade,
    InUseByCrafting,
};

