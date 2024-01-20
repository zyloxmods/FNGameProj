#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "OnUpdateLobbyPlayerPadTopDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUpdateLobbyPlayerPadTop, FUniqueNetIdRepl, PlayerNetId, bool, bIsReady);

