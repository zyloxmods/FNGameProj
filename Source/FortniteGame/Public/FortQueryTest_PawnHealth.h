#pragma once
#include "CoreMinimal.h"
#include "FortQueryTest_GoalBase.h"
#include "FortQueryTest_PawnHealth.generated.h"

UCLASS(Blueprintable)
class UFortQueryTest_PawnHealth : public UFortQueryTest_GoalBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePercentHealth;
    
public:
    UFortQueryTest_PawnHealth();
};

