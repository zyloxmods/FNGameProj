#pragma once
#include "CoreMinimal.h"
#include "EAthenaInventorySpawnOverride.h"
#include "EAthenaLootDropOverride.h"
#include "ItemLoadoutTeamMap.generated.h"

USTRUCT(BlueprintType)
struct FItemLoadoutTeamMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TeamIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 LoadoutIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaInventorySpawnOverride UpdateOverrideType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaLootDropOverride DropAllItemsOverride;
    
    FORTNITEGAME_API FItemLoadoutTeamMap();
};

