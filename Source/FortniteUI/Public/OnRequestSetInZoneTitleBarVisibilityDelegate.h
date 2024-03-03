#pragma once
#include "CoreMinimal.h"
#include "OnRequestSetInZoneTitleBarVisibilityDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRequestSetInZoneTitleBarVisibility, bool, bNewVisibility);

