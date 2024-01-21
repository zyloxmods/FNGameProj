#pragma once
#include "CoreMinimal.h"
#include "CommonActionProgressSingleDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FCommonActionProgressSingle, float, HeldPercent);

