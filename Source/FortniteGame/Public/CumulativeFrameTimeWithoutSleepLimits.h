#pragma once
#include "CoreMinimal.h"
#include "CumulativeFrameTimeWithoutSleepLimits.generated.h"

USTRUCT(BlueprintType)
struct FCumulativeFrameTimeWithoutSleepLimits {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double FrameTimeWithoutSleep;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxCumulativeFrameTimeAboveThreshold;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxNumberOfFramesAboveThreshold;
    
    FORTNITEGAME_API FCumulativeFrameTimeWithoutSleepLimits();
};

