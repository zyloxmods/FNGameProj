#pragma once
#include "CoreMinimal.h"
#include "ECustomLootSelection.h"
#include "CustomLootOverrideData.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FCustomLootOverrideData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECustomLootSelection CustomLootType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LootTierData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LootPackages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ExperimentalLootTierData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ExperimentalLootPackages;
    
    FORTNITEGAME_API FCustomLootOverrideData();
};

