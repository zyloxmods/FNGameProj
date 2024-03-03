#pragma once
#include "CoreMinimal.h"
#include "RespawnAndSpectateSelectSetVisibilityDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRespawnAndSpectateSelectSetVisibility, bool, bNewVisibility);

