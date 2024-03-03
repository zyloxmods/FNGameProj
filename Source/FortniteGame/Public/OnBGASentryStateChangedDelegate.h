#pragma once
#include "CoreMinimal.h"
#include "EBuildingGameplayActorSentry_State.h"
#include "OnBGASentryStateChangedDelegate.generated.h"

class ABuildingGameplayActorSentry;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBGASentryStateChanged, ABuildingGameplayActorSentry*, Sentry, EBuildingGameplayActorSentry_State, State);

