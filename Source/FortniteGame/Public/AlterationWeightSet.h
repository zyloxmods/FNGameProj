#pragma once
#include "CoreMinimal.h"
#include "AlterationWeightData.h"
#include "AlterationWeightSet.generated.h"

USTRUCT(BlueprintType)
struct FAlterationWeightSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAlterationWeightData> WeightData;
    
    FORTNITEGAME_API FAlterationWeightSet();
};

