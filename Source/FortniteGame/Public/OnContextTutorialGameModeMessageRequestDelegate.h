#pragma once
#include "CoreMinimal.h"
#include "AthenaGameMessageData.h"
#include "OnContextTutorialGameModeMessageRequestDelegate.generated.h"

class UFortContextualTutorialController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnContextTutorialGameModeMessageRequest, FAthenaGameMessageData, MsgData, UFortContextualTutorialController*, OwnedController);

