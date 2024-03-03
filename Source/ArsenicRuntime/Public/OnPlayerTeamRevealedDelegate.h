#pragma once
#include "CoreMinimal.h"
#include "OnPlayerTeamRevealedDelegate.generated.h"

class AFortPlayerStateAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerTeamRevealed, AFortPlayerStateAthena*, PlayerState);

