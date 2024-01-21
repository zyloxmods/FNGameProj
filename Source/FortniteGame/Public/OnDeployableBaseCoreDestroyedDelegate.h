#pragma once
#include "CoreMinimal.h"
#include "OnDeployableBaseCoreDestroyedDelegate.generated.h"

class ADeployableBaseCore;
class ADeployableBasePlot;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDeployableBaseCoreDestroyed, ADeployableBasePlot*, Plot, ADeployableBaseCore*, Core);

