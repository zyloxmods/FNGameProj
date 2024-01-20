#pragma once
#include "CoreMinimal.h"
#include "LobbyEmptyPlayerClickedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLobbyEmptyPlayerClickedDelegate, int32, PlayerIndex);

