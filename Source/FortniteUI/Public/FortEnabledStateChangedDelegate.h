#pragma once
#include "CoreMinimal.h"
#include "FortEnabledStateChangedDelegate.generated.h"

class UFortBaseButton;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFortEnabledStateChanged, UFortBaseButton*, Button, bool, Enabled);

