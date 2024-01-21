#pragma once
#include "CoreMinimal.h"
#include "OnHandleTeamLevelChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnHandleTeamLevelChanged, uint8, Team, int32, MatchLevel, int32, TeamXP, int32, NextLevelXP);

