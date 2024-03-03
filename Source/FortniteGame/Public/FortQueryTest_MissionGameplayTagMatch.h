#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "FortQueryTest_MissionGameplayTagMatch.generated.h"

UCLASS(Blueprintable)
class UFortQueryTest_MissionGameplayTagMatch : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery MissionPlacementActorTagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTagsToMatch;
    
public:
    UFortQueryTest_MissionGameplayTagMatch();
};

