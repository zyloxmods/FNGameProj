#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "FortQueryTest_HasNearbyEncounterGoals.generated.h"

UCLASS(Blueprintable)
class UFortQueryTest_HasNearbyEncounterGoals : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOnlyActiveEncounters: 1;
    
     UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue TestDistance;
    
    UFortQueryTest_HasNearbyEncounterGoals();
};

