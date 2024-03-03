#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnGameplayStateInitializeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameplayStateInitialize, const FGameplayTag&, StateId);

