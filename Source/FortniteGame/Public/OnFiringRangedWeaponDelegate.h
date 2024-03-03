#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnFiringRangedWeaponDelegate.generated.h"

class UFortGameplayAbility;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFiringRangedWeapon, UFortGameplayAbility*, GameplayAbility, FGameplayTagContainer, AbilityTags);

