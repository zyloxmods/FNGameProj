#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortGameplayAbility.h"
#include "FortGameplayAbility_SpyTech.generated.h"

UCLASS(Blueprintable)
class UFortGameplayAbility_SpyTech : public UFortGameplayAbility {
    GENERATED_BODY()
public:
    UFortGameplayAbility_SpyTech();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAbilityGranted(const FGameplayTagContainer& TagContainer);
    
};

