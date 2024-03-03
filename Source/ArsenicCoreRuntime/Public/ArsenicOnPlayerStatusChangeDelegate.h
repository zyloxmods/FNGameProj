#pragma once
#include "CoreMinimal.h"
#include "EArsenicCorePlayerStatus.h"
#include "ArsenicOnPlayerStatusChangeDelegate.generated.h"

class AFortPlayerStateAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FArsenicOnPlayerStatusChange, const AFortPlayerStateAthena*, PlayerState, EArsenicCorePlayerStatus, PlayerStatus);

