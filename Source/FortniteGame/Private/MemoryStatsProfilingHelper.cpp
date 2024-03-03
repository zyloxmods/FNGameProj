#include "MemoryStatsProfilingHelper.h"

void UMemoryStatsProfilingHelper::PrintMemoryCaptureToLog(TMap<FString, float> InCapture, bool bCaptureIsInMB) {
}

void UMemoryStatsProfilingHelper::PrintMemoryCaptureToCsv(TMap<FString, float> InCapture, const FString& InFilename, const FString& OptionalCaptureName) {
}

void UMemoryStatsProfilingHelper::FinalizeMemoryCaptureCsv(const FString& InFilename) {
}

TMap<FString, float> UMemoryStatsProfilingHelper::CaptureMemoryValues(TMap<FString, float> InPrevCapture, TMap<FString, float>& OutComparison, bool bConvertToMB) {
    return TMap<FString, float>();
}

UMemoryStatsProfilingHelper::UMemoryStatsProfilingHelper() {
}

