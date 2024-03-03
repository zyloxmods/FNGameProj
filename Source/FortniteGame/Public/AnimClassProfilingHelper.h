#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AnimClassStats.h"
#include "AnimClassProfilingHelper.generated.h"

UCLASS(Blueprintable)
class UAnimClassProfilingHelper : public UObject {
    GENERATED_BODY()
public:
    UAnimClassProfilingHelper();
    UFUNCTION(BlueprintCallable)
    static void PrintAnimClassStatsToLog(const FAnimClassStats& Stats);
    
    UFUNCTION(BlueprintCallable)
    static void PrintAnimClassStatListToLog(TMap<FString, FAnimClassStats> InCapture);
    
    UFUNCTION(BlueprintCallable)
    static TMap<FString, FAnimClassStats> CaptureAnimClassStats(TMap<FString, FAnimClassStats> InPrevCapture, TMap<FString, FAnimClassStats>& OutComparison, TArray<FString> DesiredStats);
    
};

