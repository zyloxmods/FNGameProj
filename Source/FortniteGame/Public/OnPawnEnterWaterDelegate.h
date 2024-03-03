#pragma once
#include "CoreMinimal.h"
#include "OnPawnEnterWaterDelegate.generated.h"

class AFortPlayerPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPawnEnterWater, AFortPlayerPawn*, FortPlayerPawn);

