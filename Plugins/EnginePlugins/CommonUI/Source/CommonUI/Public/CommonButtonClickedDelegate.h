#pragma once
#include "CoreMinimal.h"
#include "CommonButtonClickedDelegate.generated.h"

class UCommonButton;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCommonButtonClicked, UCommonButton*, Button);

