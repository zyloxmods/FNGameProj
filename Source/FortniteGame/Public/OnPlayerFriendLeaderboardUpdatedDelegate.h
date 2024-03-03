#pragma once
#include "CoreMinimal.h"
#include "OnPlayerFriendLeaderboardUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerFriendLeaderboardUpdated, bool, bSuccess);

