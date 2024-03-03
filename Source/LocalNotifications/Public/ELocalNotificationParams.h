#pragma once
#include "CoreMinimal.h"
#include "ELocalNotificationParams.generated.h"

UENUM(BlueprintType)
enum class ELocalNotificationParams : uint8 {
    BestHour24ToNotify,
    SpecificFireDateTime,
    HoursSinceLastSession,
    HoursAfterEvent_Max,
    HoursAfterEvent_Min,
    Max,
};

