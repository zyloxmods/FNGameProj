#pragma once
#include "CoreMinimal.h"
#include "ECountAIAssignedToType.h"
#include "FortQueryTest_GoalBase.h"
#include "FortQueryTest_GoalNumberOfAIAssigned.generated.h"

UCLASS(Blueprintable)
class UFortQueryTest_GoalNumberOfAIAssigned : public UFortQueryTest_GoalBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECountAIAssignedToType TypeOfMatchToCount;
    
public:
    UFortQueryTest_GoalNumberOfAIAssigned();
};

