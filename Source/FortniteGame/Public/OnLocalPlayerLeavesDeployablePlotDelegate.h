#pragma once
#include "CoreMinimal.h"
#include "OnLocalPlayerLeavesDeployablePlotDelegate.generated.h"

class ADeployableBasePlot;
class AFortPlayerPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLocalPlayerLeavesDeployablePlot, AFortPlayerPawn*, PlayerPawn, ADeployableBasePlot*, Plot);

