#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "FortQueryTest_GoalBase.h"
#include "FortQueryTest_GoalProject.generated.h"

UCLASS(Blueprintable)
class UFortQueryTest_GoalProject : public UFortQueryTest_GoalBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnvTraceData ProjectionData;
    
public:
    UFortQueryTest_GoalProject();
};

