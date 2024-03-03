#pragma once
#include "CoreMinimal.h"
#include "CobaltPostKillDelegate.generated.h"

class AFortPlayerStateAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCobaltPostKill, AFortPlayerStateAthena*, Victim);

