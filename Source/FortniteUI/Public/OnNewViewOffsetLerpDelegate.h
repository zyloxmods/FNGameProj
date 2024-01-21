#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnNewViewOffsetLerpDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNewViewOffsetLerp, FVector2D, NewOffset);

