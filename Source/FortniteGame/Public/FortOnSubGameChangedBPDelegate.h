#pragma once
#include "CoreMinimal.h"
#include "ESubGame.h"
#include "FortOnSubGameChangedBPDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFortOnSubGameChangedBP, ESubGame, NewSubGame);

