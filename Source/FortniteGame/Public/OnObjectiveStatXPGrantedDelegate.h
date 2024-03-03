#pragma once
#include "CoreMinimal.h"
#include "XPEventInfo.h"
#include "OnObjectiveStatXPGrantedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnObjectiveStatXPGranted, const FXPEventInfo&, XPEvent);

