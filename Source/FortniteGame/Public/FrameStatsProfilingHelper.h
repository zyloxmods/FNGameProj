#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FrameStatsProfilingHelper.generated.h"

UCLASS(Blueprintable)
class UFrameStatsProfilingHelper : public UObject {
    GENERATED_BODY()
public:
    UFrameStatsProfilingHelper();
    UFUNCTION(BlueprintCallable)
    static void StopRecordingFrameStats(const FString& MapName);
    
    UFUNCTION(BlueprintCallable)
    static void StartRecordingFrameStats(const FString& FPSChartLabel);
    
};

