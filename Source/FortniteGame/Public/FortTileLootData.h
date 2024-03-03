#pragma once
#include "CoreMinimal.h"
#include "FortLootQuotaData.h"
#include "FortTileLootData.generated.h"

USTRUCT(BlueprintType)
struct FFortTileLootData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortLootQuotaData LootQuotas[18];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LootDrops[18];
    
    FORTNITEGAME_API FFortTileLootData();
};

