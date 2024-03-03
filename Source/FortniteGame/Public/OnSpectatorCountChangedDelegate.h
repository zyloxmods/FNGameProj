#pragma once
#include "CoreMinimal.h"
#include "OnSpectatorCountChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpectatorCountChanged, int32, SpectatorCount);

