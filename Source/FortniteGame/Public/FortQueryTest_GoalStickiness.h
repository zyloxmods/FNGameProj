#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "DataProviders/AIDataProvider.h"
#include "FortQueryTest_GoalBase.h"
#include "FortQueryTest_GoalStickiness.generated.h"

UCLASS(Blueprintable)
class UFortQueryTest_GoalStickiness : public UFortQueryTest_GoalBase {
    GENERATED_BODY()
public:
protected:
     UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue StartValueForGoal;
    
     UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue EndValueForGoal;
    
     UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue TimeBeforeValueLerp;
    
     UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue ValueLerpDuration;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderBoolValue ApplyStickinessToAllGoalsWithSameActor;
    
public:
    UFortQueryTest_GoalStickiness();
};

