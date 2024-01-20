#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "FortAIAssignmentIdentifier.h"
#include "Templates/SubclassOf.h"
#include "FortQueryGenerator_SpecificAssignmentGoals.generated.h"

class UFortAIAssignmentSettings;
class UFortAIGoalProvider;

UCLASS(Blueprintable, EditInlineNew)
class UFortQueryGenerator_SpecificAssignmentGoals : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAIAssignmentIdentifier AssignmentIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAIAssignmentSettings* AssignmentSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAIGoalProvider> GoalProvider;
    
public:
    UFortQueryGenerator_SpecificAssignmentGoals();
};

