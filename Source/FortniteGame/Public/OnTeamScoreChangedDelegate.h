#pragma once
#include "CoreMinimal.h"
#include "OnTeamScoreChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTeamScoreChanged, int32, NewScore);

