#pragma once
#include "CoreMinimal.h"
#include "MetricStateInformation.h"
#include "DetailedMetricInformation.generated.h"

USTRUCT(BlueprintType)
struct FDetailedMetricInformation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMetricStateInformation> MetricStates;
    
    FORTNITEGAME_API FDetailedMetricInformation();
};

