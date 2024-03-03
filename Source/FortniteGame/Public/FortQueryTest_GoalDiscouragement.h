#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "FortQueryTest_GoalBase.h"
#include "FortQueryTest_GoalDiscouragement.generated.h"

UCLASS(Blueprintable)
class UFortQueryTest_GoalDiscouragement : public UFortQueryTest_GoalBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY( EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderBoolValue DisableDiscouragementWhenUndermining;
    
public:
    UFortQueryTest_GoalDiscouragement();
};

