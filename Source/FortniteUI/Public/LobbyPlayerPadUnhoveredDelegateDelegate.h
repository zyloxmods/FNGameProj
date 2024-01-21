#pragma once
#include "CoreMinimal.h"
#include "LobbyPlayerPadUnhoveredDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLobbyPlayerPadUnhoveredDelegate, int32, PlayerIndex);

