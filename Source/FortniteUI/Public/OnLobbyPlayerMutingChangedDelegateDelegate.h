#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "OnLobbyPlayerMutingChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLobbyPlayerMutingChangedDelegate, FUniqueNetIdRepl, UniqueId, bool, bMuted);

