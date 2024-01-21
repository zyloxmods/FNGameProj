#pragma once
#include "CoreMinimal.h"
#include "AthenaTravelLogEntry.h"
#include "OnTravelLogUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTravelLogUpdated, const FAthenaTravelLogEntry&, NewEntry);

