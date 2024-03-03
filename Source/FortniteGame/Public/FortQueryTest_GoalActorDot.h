#pragma once
#include "CoreMinimal.h"
#include "EFortTestGoalActorDot.h"
#include "FortQueryTest_GoalBase.h"
#include "Templates/SubclassOf.h"
#include "FortQueryTest_GoalActorDot.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class UFortQueryTest_GoalActorDot : public UFortQueryTest_GoalBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> LineATo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> LineBTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortTestGoalActorDot TestMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAbsoluteValue;
    
public:
    UFortQueryTest_GoalActorDot();
};

