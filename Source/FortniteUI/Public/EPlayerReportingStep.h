#pragma once
#include "CoreMinimal.h"
#include "EPlayerReportingStep.generated.h"

UENUM(BlueprintType)
enum class EPlayerReportingStep : uint8 {
    ReportingReason,
    ReportingPlayer,
    AdditionalInfo,
};

