#pragma once
#include "CoreMinimal.h"
#include "OnBanAcknowledgedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnBanAcknowledged, bool, bSuccess);

