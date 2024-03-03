#pragma once
#include "CoreMinimal.h"
#include "OnBossPlayerChangedDelegate.generated.h"

class AFortPlayerStateAthena;
class UCreativePlayerHealthInfoComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBossPlayerChanged, AFortPlayerStateAthena*, PlayerState, UCreativePlayerHealthInfoComponent*, HealthInfoComponent);

