#pragma once
#include "CoreMinimal.h"
#include "OnMoveToolDropToFloorChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMoveToolDropToFloorChanged, bool, bDropToFloorOn);

