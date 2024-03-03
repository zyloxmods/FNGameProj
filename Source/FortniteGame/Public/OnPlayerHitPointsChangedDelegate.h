#pragma once
#include "CoreMinimal.h"
#include "OnPlayerHitPointsChangedDelegate.generated.h"

class AFortPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOnPlayerHitPointsChanged, AFortPlayerState*, PlayerState, float, Health, float, HealthMax, float, Shield, float, ShieldMax);

