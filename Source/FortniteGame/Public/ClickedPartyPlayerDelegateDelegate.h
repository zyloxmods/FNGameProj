#pragma once
#include "CoreMinimal.h"
#include "ClickedPartyPlayerDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FClickedPartyPlayerDelegate, int32, PlayerIndex);

