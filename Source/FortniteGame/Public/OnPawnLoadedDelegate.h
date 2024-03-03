#pragma once
#include "CoreMinimal.h"
#include "OnPawnLoadedDelegate.generated.h"

class AFortPlayerPawnAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPawnLoaded, AFortPlayerPawnAthena*, NewPawn);

