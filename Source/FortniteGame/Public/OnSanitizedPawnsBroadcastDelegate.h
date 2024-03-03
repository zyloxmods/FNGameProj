#pragma once
#include "CoreMinimal.h"
#include "OnSanitizedPawnsBroadcastDelegate.generated.h"

class AFortPlayerPawnAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSanitizedPawnsBroadcast, const TArray<AFortPlayerPawnAthena*>&, AthenaPawns);

