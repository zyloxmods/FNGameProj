#pragma once
#include "CoreMinimal.h"
#include "EFortPointsFromNavGraphGoalPathDistanceFilterOperator.generated.h"

UENUM(BlueprintType)
namespace EFortPointsFromNavGraphGoalPathDistanceFilterOperator {
    enum Type {
        AllGoalsInRange,
        AnyGoalInRange,
    };
}

