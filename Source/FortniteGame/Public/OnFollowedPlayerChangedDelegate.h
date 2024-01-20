#pragma once
#include "CoreMinimal.h"
#include "OnFollowedPlayerChangedDelegate.generated.h"

class AFortPlayerControllerSpectating;
class AFortPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFollowedPlayerChanged, AFortPlayerControllerSpectating*, SpectatorPC, AFortPlayerState*, NewFollowedPlayer);

