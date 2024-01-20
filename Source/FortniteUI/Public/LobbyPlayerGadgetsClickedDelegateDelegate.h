#pragma once
#include "CoreMinimal.h"
#include "LobbyPlayerGadgetsClickedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLobbyPlayerGadgetsClickedDelegate, int32, PlayerIndex);

