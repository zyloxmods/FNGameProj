#pragma once
#include "CoreMinimal.h"
#include "GameStartCountdownBeginDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGameStartCountdownBegin, float, Duration, int32, StartingCountdownInteger);

