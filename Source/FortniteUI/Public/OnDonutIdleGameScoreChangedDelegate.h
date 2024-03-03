#pragma once
#include "CoreMinimal.h"
#include "OnDonutIdleGameScoreChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDonutIdleGameScoreChanged, int32, NewScore);

