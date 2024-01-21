#pragma once
#include "CoreMinimal.h"
#include "OnNumSurvivorsRescuedChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNumSurvivorsRescuedChanged, int32, NumSurvivorsRescued);

