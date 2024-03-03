#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayTagContainer.h"
#include "TargetSelectionContinuousDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTargetSelectionContinuousDelegate, const FGameplayAbilityTargetDataHandle&, TargetData, FGameplayTag, ApplicationTag);

