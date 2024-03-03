#pragma once
#include "CoreMinimal.h"
#include "OnNumSurvivorsRescuedUpdateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNumSurvivorsRescuedUpdate, int32, NumSurvivorsRescued);

