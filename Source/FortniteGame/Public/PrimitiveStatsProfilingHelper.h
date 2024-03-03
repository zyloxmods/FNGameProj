#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PrimitiveStatsProfilingHelper.generated.h"

UCLASS(Blueprintable)
class UPrimitiveStatsProfilingHelper : public UObject {
    GENERATED_BODY()
public:
    UPrimitiveStatsProfilingHelper();
private:
    UFUNCTION(BlueprintCallable)
    static void PrintPrimitiveCaptureToLog(TMap<FString, float> InCapture);
    
    UFUNCTION(BlueprintCallable)
    static void PrintPrimitiveCaptureToCsv(TMap<FString, float> InCapture, const FString& InFilename, const FString& OptionalCaptureName);
    
    UFUNCTION(BlueprintCallable)
    static void FinalizePrimitiveCaptureCsv(const FString& InFilename);
    
    UFUNCTION(BlueprintCallable)
    static void EnablePrimitiveStatsCapture();
    
    UFUNCTION(BlueprintCallable)
    static TMap<FString, float> CapturePrimitiveValues(TMap<FString, float> InPrevCapture, TMap<FString, float>& OutComparison, TArray<FString> DesiredStats);
    
};

