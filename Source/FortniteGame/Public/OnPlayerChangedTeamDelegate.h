#pragma once
#include "CoreMinimal.h"
#include "OnPlayerChangedTeamDelegate.generated.h"

class AFortPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnPlayerChangedTeam, AFortPlayerState*, PlayerState, uint8, TeamId, uint8, OldTeamId, bool, bTeamChangedWithoutRespawn);

