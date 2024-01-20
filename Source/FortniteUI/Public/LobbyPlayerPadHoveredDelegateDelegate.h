#pragma once
#include "CoreMinimal.h"
#include "LobbyPlayerPadHoveredDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLobbyPlayerPadHoveredDelegate, int32, PlayerIndex);

