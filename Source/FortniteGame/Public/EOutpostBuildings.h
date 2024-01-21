#pragma once
#include "CoreMinimal.h"
#include "EOutpostBuildings.generated.h"

UENUM(BlueprintType)
enum class EOutpostBuildings : uint8 {
    StormShield,
    CraftingTable,
    Fabricator,
    HarvestingOptimizer,
    StorageVault,
    POST,
};

