#pragma once
#include "CoreMinimal.h"
#include "ETimespanAsTextFormat.generated.h"

UENUM(BlueprintType)
enum class ETimespanAsTextFormat : uint8 {
    DaysHoursMinutesSeconds,
    Colons,
    ColonsWithMilliseconds,
    Approximate,
    ApproximateWithWeeks,
    ApproximateWithMonths,
    ApproximateWithYears,
};

