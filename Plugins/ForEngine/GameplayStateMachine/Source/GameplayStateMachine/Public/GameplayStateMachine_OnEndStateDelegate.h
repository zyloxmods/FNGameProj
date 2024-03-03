#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayStateMachine_OnEndStateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGameplayStateMachine_OnEndState, const FGameplayTag&, EndedStateId, const FGameplayTag&, NextStateId);

