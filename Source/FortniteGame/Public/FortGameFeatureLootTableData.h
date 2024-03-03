#pragma once
#include "CoreMinimal.h"
#include "FortGameFeatureLootTableData.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FFortGameFeatureLootTableData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> LootTierData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> LootPackageData;
    
    FORTNITEGAME_API FFortGameFeatureLootTableData();
};

