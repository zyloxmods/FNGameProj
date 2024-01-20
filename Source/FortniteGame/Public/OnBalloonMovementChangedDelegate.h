#pragma once
#include "CoreMinimal.h"
#include "OnBalloonMovementChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBalloonMovementChanged, bool, bUsingBalloonMovement);

