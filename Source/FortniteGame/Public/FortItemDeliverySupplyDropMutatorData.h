#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortItemDeliverySupplyDropMutatorData.generated.h"

class UEnvQuery;

USTRUCT(BlueprintType)
struct FFortItemDeliverySupplyDropMutatorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldApplyMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat NumDeliveryItemsToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* SupplyDropPlacementQuery;
    
    FORTNITEGAME_API FFortItemDeliverySupplyDropMutatorData();
};

