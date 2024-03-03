#pragma once
#include "CoreMinimal.h"
#include "EAthenaGameMsgType.h"
#include "OnHideGameModeMessageRequestDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnHideGameModeMessageRequest, EAthenaGameMsgType, MsgType, bool, bInstantHide, bool, bClearQueue);

