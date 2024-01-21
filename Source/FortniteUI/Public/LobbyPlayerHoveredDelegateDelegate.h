#pragma once
#include "CoreMinimal.h"
#include "LobbyPlayerHoveredDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLobbyPlayerHoveredDelegate, int32, PlayerIndex);

