#pragma once
#include "CoreMinimal.h"
#include "OnPlayspaceEditModeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayspaceEditModeChanged, bool, bInEditMode);

