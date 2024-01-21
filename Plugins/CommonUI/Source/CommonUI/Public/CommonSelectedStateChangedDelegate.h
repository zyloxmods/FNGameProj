#pragma once
#include "CoreMinimal.h"
#include "CommonSelectedStateChangedDelegate.generated.h"

class UCommonButton;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCommonSelectedStateChanged, UCommonButton*, Button, bool, Selected);

