#pragma once
#include "CoreMinimal.h"
#include "OnCMSTileConfirmedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCMSTileConfirmed, bool, bSuccess);

