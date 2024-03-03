#pragma once
#include "CoreMinimal.h"
#include "FortAITask_Move.h"
#include "FortAITask_StepAside.generated.h"

class AActor;

UCLASS(Blueprintable)
class UFortAITask_StepAside : public UFortAITask_Move {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* GoalActor;
    
public:
    UFortAITask_StepAside();
};

