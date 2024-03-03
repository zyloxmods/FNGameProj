#include "FortDateTimeLibrary.h"

FTimespan UFortDateTimeLibrary::GetTimeTillEventTagEnds(AFortPlayerController* FortPC, const FString& EventTag) {
    return FTimespan{};
}

FText UFortDateTimeLibrary::GetTimespanAsText(const FTimespan& Timespan, bool bShowSeconds, ETimespanAsTextFormat FormatType, ETimespanUnitDisplayFormat UnitDisplayType) {
    return FText::GetEmpty();
}

FTimespan UFortDateTimeLibrary::GetTimeSinceEventTagStart(AFortPlayerController* FortPC, const FString& EventTag) {
    return FTimespan{};
}

FTimespan UFortDateTimeLibrary::GetTimeSinceAthenaSeasonStart(AFortPlayerController* FortPC) {
    return FTimespan{};
}

FDateTime UFortDateTimeLibrary::GetMcpRelativeUtcNow(AFortPlayerController* FortPC) {
    return FDateTime{};
}

UFortDateTimeLibrary::UFortDateTimeLibrary() {
}

