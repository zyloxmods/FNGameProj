#pragma once
#include "CoreMinimal.h"
#include "OnWinningScoreAnnouncedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWinningScoreAnnounced, int32, WinningScore);

