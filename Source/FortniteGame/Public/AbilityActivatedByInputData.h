#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "AbilityActivatedByInputData.generated.h"

class UFortGameplayAbility;

USTRUCT(BlueprintType)
struct FAbilityActivatedByInputData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortGameplayAbility> Ability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery ActivationTagQuery;
    
    FORTNITEGAME_API FAbilityActivatedByInputData();
};

