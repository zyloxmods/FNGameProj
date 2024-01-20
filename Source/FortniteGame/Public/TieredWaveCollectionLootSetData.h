#pragma once
#include "CoreMinimal.h"
#include "TieredWaveCollectionLootSetData.generated.h"

USTRUCT(BlueprintType)
struct FTieredWaveCollectionLootSetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> StartOfCollectionItemTierGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SuccessfulWaveItemTierGroups;
    
    FORTNITEGAME_API FTieredWaveCollectionLootSetData();
};

