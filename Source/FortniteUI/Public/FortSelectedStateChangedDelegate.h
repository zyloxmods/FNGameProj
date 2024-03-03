#pragma once
#include "CoreMinimal.h"
#include "FortSelectedStateChangedDelegate.generated.h"

class UFortBaseButton;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFortSelectedStateChanged, UFortBaseButton*, Button, bool, Selected);

