#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortAthenaAIBotEvaluator.h"
#include "FortAthenaAIBotEvaluator_TagQuery.generated.h"

class UAbilitySystemComponent;

UCLASS(Abstract, Blueprintable)
class UFortAthenaAIBotEvaluator_TagQuery : public UFortAthenaAIBotEvaluator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery TagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* CachedAbilitySystemComponent;
    
public:
    UFortAthenaAIBotEvaluator_TagQuery();
};

