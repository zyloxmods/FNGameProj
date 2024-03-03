#pragma once
#include "CoreMinimal.h"
#include "ENitrogenBonusCondition.generated.h"

UENUM(BlueprintType)
enum class ENitrogenBonusCondition : uint8 {
    MustMeetGoal,
    MustNotExceedThreshold,
};

