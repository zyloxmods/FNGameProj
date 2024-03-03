#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MemoryStatsProfilingHelper.generated.h"

UCLASS(Blueprintable)
class UMemoryStatsProfilingHelper : public UObject {
    GENERATED_BODY()
public:
    UMemoryStatsProfilingHelper();
    UFUNCTION(BlueprintCallable)
    static void PrintMemoryCaptureToLog(TMap<FString, float> InCapture, bool bCaptureIsInMB);
    
    UFUNCTION(BlueprintCallable)
    static void PrintMemoryCaptureToCsv(TMap<FString, float> InCapture, const FString& InFilename, const FString& OptionalCaptureName);
    
    UFUNCTION(BlueprintCallable)
    static void FinalizeMemoryCaptureCsv(const FString& InFilename);
    
    UFUNCTION(BlueprintCallable)
    static TMap<FString, float> CaptureMemoryValues(TMap<FString, float> InPrevCapture, TMap<FString, float>& OutComparison, bool bConvertToMB);
    
};

