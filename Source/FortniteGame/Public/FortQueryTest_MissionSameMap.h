#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "GameplayTagContainer.h"
#include "FortQueryTest_MissionSameMap.generated.h"

UCLASS(Blueprintable)
class UFortQueryTest_MissionSameMap : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery MissionPlacementActorTagQuery;
    
public:
    UFortQueryTest_MissionSameMap();
};

