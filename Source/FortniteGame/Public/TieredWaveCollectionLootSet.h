#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TieredWaveCollectionLootSetData.h"
#include "TieredWaveCollectionLootSet.generated.h"

USTRUCT(BlueprintType)
struct FTieredWaveCollectionLootSet : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTieredWaveCollectionLootSetData> LootSetData;
    
    FORTNITEGAME_API FTieredWaveCollectionLootSet();
};

