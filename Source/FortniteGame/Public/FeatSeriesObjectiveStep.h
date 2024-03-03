#pragma once
#include "CoreMinimal.h"
#include "FeatSeriesObjectiveStep.generated.h"

USTRUCT(BlueprintType)
struct FFeatSeriesObjectiveStep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FORTNITEGAME_API FFeatSeriesObjectiveStep();
};

