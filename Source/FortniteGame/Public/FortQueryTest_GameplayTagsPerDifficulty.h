#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "FortGameplayTagQueryPerDifficulty.h"
#include "FortQueryTest_GameplayTagsPerDifficulty.generated.h"

UCLASS(Blueprintable)
class UFortQueryTest_GameplayTagsPerDifficulty : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortGameplayTagQueryPerDifficulty> TagQueriesPerDifficulty;
    
public:
    UFortQueryTest_GameplayTagsPerDifficulty();
};

