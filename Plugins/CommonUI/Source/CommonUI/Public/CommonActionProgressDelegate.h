#pragma once
#include "CoreMinimal.h"
#include "CommonActionProgressDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCommonActionProgress, float, HeldPercent);

