#pragma once
#include "CoreMinimal.h"
#include "MyTownWorkerPortraitData.generated.h"

class UFortItemIconDefinition;

USTRUCT(BlueprintType)
struct FMyTownWorkerPortraitData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortItemIconDefinition> Portrait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectionWeight;
    
    FORTNITEGAME_API FMyTownWorkerPortraitData();
};

