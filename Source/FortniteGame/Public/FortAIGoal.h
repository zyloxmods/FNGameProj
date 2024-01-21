#pragma once
#include "CoreMinimal.h"
#include "FortAIGoalInfo.h"
#include "FortAIGoal.generated.h"

class AFortAIController;

USTRUCT(BlueprintType)
struct FFortAIGoal : public FFortAIGoalInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortAIController*> ControllersAssignedToGoal;
    
public:
    FORTNITEGAME_API FFortAIGoal();
};

