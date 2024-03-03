#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayStateMachine_OnStateTransitionDelegate.generated.h"

class UGameplayState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FGameplayStateMachine_OnStateTransition, const FGameplayTag&, PrevStateId, const FGameplayTag&, NextStateId, UGameplayState*, NextStateObject);

