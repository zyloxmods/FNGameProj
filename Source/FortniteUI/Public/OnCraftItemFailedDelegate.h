#pragma once
#include "CoreMinimal.h"
#include "EFortCraftFailCause.h"
#include "OnCraftItemFailedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCraftItemFailed, EFortCraftFailCause, FailureCause);

