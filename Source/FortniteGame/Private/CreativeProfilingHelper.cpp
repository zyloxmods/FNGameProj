#include "CreativeProfilingHelper.h"

void UCreativeProfilingHelper::PrintThermometerCaptureToLog(FCreativePerfCost InCapture, const FString& CaptureName) {
}

void UCreativeProfilingHelper::PrintThermometerCaptureToCsv(FCreativePerfCost InCapture, const FString& InFilename, const FString& OptionalCaptureName) {
}

FCreativePerfCost UCreativeProfilingHelper::CaptureOverallThermometerValue(float InPrevCapture, float& OutComparison, EFortBudgetCategory Category) {
    return FCreativePerfCost{};
}

FCreativePerfCost UCreativeProfilingHelper::CaptureActorThermometerValue(AActor* InActor, EFortBudgetCategory Category) {
    return FCreativePerfCost{};
}

UCreativeProfilingHelper::UCreativeProfilingHelper() {
}

