#pragma once
#include "CoreMinimal.h"
#include "ETagGoalScoringCategory.generated.h"

UENUM(BlueprintType)
namespace ETagGoalScoringCategory {
    enum Type {
        Ignore,
        HighInterest,
        NumCategories,
    };
}

