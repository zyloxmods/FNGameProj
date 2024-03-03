#pragma once
#include "CoreMinimal.h"
#include "ObjectCostData.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FObjectCostData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, int32> PerMetricCosts;
    
    FObjectCostData();
};

