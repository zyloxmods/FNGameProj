#pragma once
#include "CoreMinimal.h"
#include "TieredCollectionProgressionDataBase.h"
#include "CollectionLootSetData.generated.h"

USTRUCT(BlueprintType)
struct FCollectionLootSetData : public FTieredCollectionProgressionDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LootSetNames;
    
    FORTNITEGAME_API FCollectionLootSetData();
};

