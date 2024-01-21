#pragma once
#include "CoreMinimal.h"
#include "OnHandleTeamXPChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnHandleTeamXPChanged, uint8, Team, int32, MatchLevel, int32, TeamXP, int32, NextLevelXP);

