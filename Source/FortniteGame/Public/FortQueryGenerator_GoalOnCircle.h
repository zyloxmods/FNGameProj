#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h"
#include "FortAIAssignmentIdentifier.h"
#include "FortQueryGenerator_GoalOnCircle.generated.h"

class UFortAIAssignmentSettings;

UCLASS(Blueprintable, EditInlineNew)
class UFortQueryGenerator_GoalOnCircle : public UEnvQueryGenerator_OnCircle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeCenterActorInGeneratedGoals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAIAssignmentSettings* OptionalAssignmentSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAIAssignmentIdentifier OptionalAssignmentIdentifier;
    
public:
    UFortQueryGenerator_GoalOnCircle();
};

