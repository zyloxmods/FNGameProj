#pragma once
#include "CoreMinimal.h"
#include "EMatchmakingCancelReasonV2.h"
#include "OnInGameMatchmakingCanceledDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInGameMatchmakingCanceled, EMatchmakingCancelReasonV2, CancelReason);

