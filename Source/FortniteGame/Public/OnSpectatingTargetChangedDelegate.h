#pragma once
#include "CoreMinimal.h"
#include "OnSpectatingTargetChangedDelegate.generated.h"

class AFortPlayerStateZone;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpectatingTargetChanged, AFortPlayerStateZone*, SpectatingTarget);

