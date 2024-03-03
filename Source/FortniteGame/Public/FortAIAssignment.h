#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortAIAssignmentIdentifier.h"
#include "FortAIGoal.h"
#include "FortAIAssignment.generated.h"

class UAIGoalComponent;
class UFortAIAssignmentSettings;
class UFortAIGoalProvider;

UCLASS(Blueprintable)
class UFortAIAssignment : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAIAssignmentIdentifier AssignmentIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAIAssignmentSettings* AssignmentSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAIGoalProvider* GoalProvider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAIGoalComponent*> GoalComponentsOnAssignment;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAIGoal> Goals;
    
public:
    UFortAIAssignment();
};

