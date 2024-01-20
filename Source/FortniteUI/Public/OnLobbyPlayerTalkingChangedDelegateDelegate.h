#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "OnLobbyPlayerTalkingChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLobbyPlayerTalkingChangedDelegate, FUniqueNetIdRepl, UniqueId, bool, bTalking);

