#pragma once
#include "CoreMinimal.h"
#include "OnLocalPlayerEntersDeployablePlotDelegate.generated.h"

class ADeployableBasePlot;
class AFortPlayerPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLocalPlayerEntersDeployablePlot, AFortPlayerPawn*, PlayerPawn, ADeployableBasePlot*, Plot);

