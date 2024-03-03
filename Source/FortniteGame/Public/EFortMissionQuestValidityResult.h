#pragma once
#include "CoreMinimal.h"
#include "EFortMissionQuestValidityResult.generated.h"

UENUM(BlueprintType)
enum class EFortMissionQuestValidityResult : uint8 {
    Invalid,
    InvalidNotPlayable,
    ValidLinked,
    ValidObjectiveCondition,
    ValidFallback,
};

