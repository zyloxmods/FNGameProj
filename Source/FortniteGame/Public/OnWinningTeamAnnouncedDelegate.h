#pragma once
#include "CoreMinimal.h"
#include "OnWinningTeamAnnouncedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWinningTeamAnnounced, int32, WinningTeam);

