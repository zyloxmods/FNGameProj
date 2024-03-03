#pragma once
#include "CoreMinimal.h"
#include "OnPlayersLeftChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayersLeftChanged, int32, NumPlayersLeft);

