#pragma once
#include "CoreMinimal.h"
#include "GoalSelectionCriteria.generated.h"

class UEnvQuery;

USTRUCT(BlueprintType)
struct FGoalSelectionCriteria {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* GoalSelectionQuery;
    
    FORTNITEGAME_API FGoalSelectionCriteria();
};

