#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "FortQueryTest_CanHitWithGameplayAbility.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class UFortQueryTest_CanHitWithGameplayAbility : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> AIsUsingAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> AbilityTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayAbilityTag;
    
    UFortQueryTest_CanHitWithGameplayAbility();
};

