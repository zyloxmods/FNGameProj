#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CreativePerfCost.h"
#include "EFortBudgetCategory.h"
#include "CreativeProfilingHelper.generated.h"

class AActor;

UCLASS(Blueprintable)
class UCreativeProfilingHelper : public UObject {
    GENERATED_BODY()
public:
    UCreativeProfilingHelper();
    UFUNCTION(BlueprintCallable)
    static void PrintThermometerCaptureToLog(FCreativePerfCost InCapture, const FString& CaptureName);
    
    UFUNCTION(BlueprintCallable)
    static void PrintThermometerCaptureToCsv(FCreativePerfCost InCapture, const FString& InFilename, const FString& OptionalCaptureName);
    
    UFUNCTION(BlueprintCallable)
    static FCreativePerfCost CaptureOverallThermometerValue(float InPrevCapture, float& OutComparison, EFortBudgetCategory Category);
    
    UFUNCTION(BlueprintCallable)
    static FCreativePerfCost CaptureActorThermometerValue(AActor* InActor, EFortBudgetCategory Category);
    
};

