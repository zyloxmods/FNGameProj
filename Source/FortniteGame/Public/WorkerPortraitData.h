#pragma once
#include "CoreMinimal.h"
#include "WorkerPortraitData.generated.h"

class UFortItemIconDefinition;

USTRUCT(BlueprintType)
struct FWorkerPortraitData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortItemIconDefinition> Portrait;
    
    FORTNITEGAME_API FWorkerPortraitData();
};

