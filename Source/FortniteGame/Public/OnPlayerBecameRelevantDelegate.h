#pragma once
#include "CoreMinimal.h"
#include "OnPlayerBecameRelevantDelegate.generated.h"

class AFortPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerBecameRelevant, AFortPlayerState*, NewlyRelevantPlayer);

