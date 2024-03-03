#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "FortQueryTest_GoalBase.h"
#include "Templates/SubclassOf.h"
#include "FortQueryTest_PerceptionAll.generated.h"

class UAISense;

UCLASS(Blueprintable)
class UFortQueryTest_PerceptionAll : public UFortQueryTest_GoalBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue SenseScores[6];
    
    UPROPERTY( EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UAISense>, FAIDataProviderFloatValue> AdditionalSenseScores;
    
     UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue MinSenseAge;
    
     UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue MaxSenseAge;
    
public:
    UFortQueryTest_PerceptionAll();
};

