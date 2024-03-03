#pragma once
#include "CoreMinimal.h"
#include "RespawnAndSpectateSelectSetSpectateIdDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRespawnAndSpectateSelectSetSpectateId, int32, SpectateId);

