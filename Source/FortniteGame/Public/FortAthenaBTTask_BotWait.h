#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_Wait.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "FortAthenaBTTask_BotWait.generated.h"

UCLASS(Blueprintable)
class UFortAthenaBTTask_BotWait : public UBTTask_Wait {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector WaitCompleteKeySelector;
    
public:
    UFortAthenaBTTask_BotWait();
};

