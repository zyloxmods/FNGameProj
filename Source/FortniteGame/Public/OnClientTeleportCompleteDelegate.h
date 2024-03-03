#pragma once
#include "CoreMinimal.h"
#include "OnClientTeleportCompleteDelegate.generated.h"

class AFortPlayerStateAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnClientTeleportComplete, AFortPlayerStateAthena*, FortPlayerStateAthena);

