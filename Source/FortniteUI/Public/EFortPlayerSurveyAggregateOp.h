#pragma once
#include "CoreMinimal.h"
#include "EFortPlayerSurveyAggregateOp.generated.h"

UENUM(BlueprintType)
enum class EFortPlayerSurveyAggregateOp : uint8 {
    Sum,
    Max,
};

