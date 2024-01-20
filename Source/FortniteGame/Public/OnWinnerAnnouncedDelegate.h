#pragma once
#include "CoreMinimal.h"
#include "OnWinnerAnnouncedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWinnerAnnounced, const FString&, WinnerPlayerName);

