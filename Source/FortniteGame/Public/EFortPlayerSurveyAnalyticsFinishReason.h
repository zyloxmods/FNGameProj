#pragma once
#include "CoreMinimal.h"
#include "EFortPlayerSurveyAnalyticsFinishReason.generated.h"

UENUM(BlueprintType)
enum class EFortPlayerSurveyAnalyticsFinishReason : uint8 {
    Submitted,
    Canceled,
};

