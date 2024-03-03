#pragma once
#include "CoreMinimal.h"
#include "OnBallooningGravityCeilingChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBallooningGravityCeilingChanged, int32, RelationToCeiling);

