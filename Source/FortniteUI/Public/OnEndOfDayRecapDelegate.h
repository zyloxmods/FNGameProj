#pragma once
#include "CoreMinimal.h"
#include "EndOfDayRecap.h"
#include "OnEndOfDayRecapDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEndOfDayRecap, const FEndOfDayRecap&, EndOfDayRecap);

