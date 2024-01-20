#pragma once
#include "CoreMinimal.h"
#include "LobbyPlayerUnselectedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLobbyPlayerUnselectedDelegate, int32, PlayerIndex);

