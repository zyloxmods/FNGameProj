#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "GameplayTagContainer.h"
#include "FortBTDecorator_GameplayAbility_HasGameplayAbility.generated.h"

UCLASS(Blueprintable)
class UFortBTDecorator_GameplayAbility_HasGameplayAbility : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayAbilityTag;
    
    UFortBTDecorator_GameplayAbility_HasGameplayAbility();
};

