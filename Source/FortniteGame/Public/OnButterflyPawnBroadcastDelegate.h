#pragma once
#include "CoreMinimal.h"
#include "OnButterflyPawnBroadcastDelegate.generated.h"

class AFortPlayerPawnAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnButterflyPawnBroadcast, const TArray<AFortPlayerPawnAthena*>&, AthenaPawns);

