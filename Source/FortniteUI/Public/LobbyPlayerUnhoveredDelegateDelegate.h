#pragma once
#include "CoreMinimal.h"
#include "LobbyPlayerUnhoveredDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLobbyPlayerUnhoveredDelegate, int32, PlayerIndex);

