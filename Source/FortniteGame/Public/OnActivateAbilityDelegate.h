#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnActivateAbilityDelegate.generated.h"

class UFortGameplayAbility;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActivateAbility, UFortGameplayAbility*, GameplayAbility, FGameplayTagContainer, AbilityTags);

