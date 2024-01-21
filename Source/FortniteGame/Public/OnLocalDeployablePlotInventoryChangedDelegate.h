#pragma once
#include "CoreMinimal.h"
#include "OnLocalDeployablePlotInventoryChangedDelegate.generated.h"

class ADeployableBasePlot;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLocalDeployablePlotInventoryChanged, ADeployableBasePlot*, Plot);

