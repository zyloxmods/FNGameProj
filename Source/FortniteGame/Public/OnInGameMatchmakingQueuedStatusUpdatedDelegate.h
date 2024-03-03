#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnInGameMatchmakingQueuedStatusUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnInGameMatchmakingQueuedStatusUpdated, const FTimespan&, EstimatedWaitTime, int32, NumQueuedPlayers, const FString&, LinkCode);

