#pragma once
#include "CoreMinimal.h"
#include "OnSkydiveLeaderChangedDelegate.generated.h"

class AFortPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSkydiveLeaderChanged, bool, bEnabled, bool, bLocal, AFortPlayerState*, LeaderPlayerState);

