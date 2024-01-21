#pragma once
#include "CoreMinimal.h"
#include "OnMoveToolEquippedChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMoveToolEquippedChanged, bool, bIsEquipped);

