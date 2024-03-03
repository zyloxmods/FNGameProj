#pragma once
#include "CoreMinimal.h"
#include "OnOccupantIdChangedDelegate.generated.h"

class ADeployableBasePlot;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOccupantIdChanged, ADeployableBasePlot*, Plot);

