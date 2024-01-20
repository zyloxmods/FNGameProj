#pragma once
#include "CoreMinimal.h"
#include "OnZebulonDroneChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnZebulonDroneChanged, bool, bEnabled, bool, bLocal);

