#pragma once
#include "CoreMinimal.h"
#include "OnPaybackKillDelegate.generated.h"

class AFortPlayerStateAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPaybackKill, AFortPlayerStateAthena*, KillerPlayerState, AFortPlayerStateAthena*, VictimPlayerState);

