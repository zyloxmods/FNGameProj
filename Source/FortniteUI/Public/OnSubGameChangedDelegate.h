#pragma once
#include "CoreMinimal.h"
#include "ESubGame.h"
#include "OnSubGameChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSubGameChanged, ESubGame, SubGame);

