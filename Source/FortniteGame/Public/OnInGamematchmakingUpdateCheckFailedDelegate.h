#pragma once
#include "CoreMinimal.h"
#include "UpdateManager.h"
#include "OnInGamematchmakingUpdateCheckFailedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInGamematchmakingUpdateCheckFailed, EUpdateCompletionStatus, UpdateStatus);

