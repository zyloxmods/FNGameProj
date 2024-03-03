#pragma once
#include "CoreMinimal.h"
#include "AthenaGameMessageData.h"
#include "OnGameModeMessageRequestDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameModeMessageRequest, FAthenaGameMessageData, MsgData);

