#pragma once
#include "CoreMinimal.h"
#include "FortAIGoalInfo.h"
#include "FortAIGoal.generated.h"

class UAIGoalComponent;

USTRUCT(BlueprintType)
struct FFortAIGoal : public FFortAIGoalInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAIGoalComponent*> GoalComponentsAssignedToGoal;
    
public:
    FORTNITEGAME_API FFortAIGoal();
};

