#pragma once
#include "CoreMinimal.h"
#include "UraniumChangeRoundProgressVisibilityDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUraniumChangeRoundProgressVisibility, bool, bNewVisibility);

