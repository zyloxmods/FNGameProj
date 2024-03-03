#pragma once
#include "CoreMinimal.h"
#include "OnAffilateNameSetAcknowledgedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnAffilateNameSetAcknowledged, bool, bSuccess);

