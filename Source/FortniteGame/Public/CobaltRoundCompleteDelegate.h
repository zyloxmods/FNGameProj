#pragma once
#include "CoreMinimal.h"
#include "CobaltRoundCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCobaltRoundComplete, const TArray<uint8>&, WinningTeams);

