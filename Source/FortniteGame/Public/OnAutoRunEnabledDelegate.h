#pragma once
#include "CoreMinimal.h"
#include "OnAutoRunEnabledDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAutoRunEnabled, bool, bAutoRunEnabled);

