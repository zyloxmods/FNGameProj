#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayStateMachine_OnBeginStateDelegate.generated.h"

class UGameplayState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FGameplayStateMachine_OnBeginState, const FGameplayTag&, BeginStateId, UGameplayState*, BeginStateObject, const FGameplayTag&, PrevStateId);

