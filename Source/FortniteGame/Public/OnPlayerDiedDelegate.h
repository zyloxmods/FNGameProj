#pragma once
#include "CoreMinimal.h"
#include "OnPlayerDiedDelegate.generated.h"

class AFortPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerDied, AFortPlayerState*, NewlyDeadPlayer);

