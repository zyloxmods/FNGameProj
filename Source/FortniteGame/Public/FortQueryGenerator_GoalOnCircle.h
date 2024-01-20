#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h"
#include "FortQueryGenerator_GoalOnCircle.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortQueryGenerator_GoalOnCircle : public UEnvQueryGenerator_OnCircle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeCenterActorInGeneratedGoals;
    
public:
    UFortQueryGenerator_GoalOnCircle();
};

