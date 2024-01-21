#pragma once
#include "CoreMinimal.h"
#include "LobbyPlayerSelectedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLobbyPlayerSelectedDelegate, int32, PlayerIndex);

