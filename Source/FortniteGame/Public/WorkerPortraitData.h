#pragma once
#include "CoreMinimal.h"
#include "WorkerPortraitData.generated.h"

class UFortItemIconDefinition;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FWorkerPortraitData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortItemIconDefinition> Portrait;
    
    FWorkerPortraitData();
};

