#pragma once
#include "CoreMinimal.h"
#include "OnFocusedBuildingAttachedTrapChangedDelegate.generated.h"

class ABuildingTrap;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFocusedBuildingAttachedTrapChanged, ABuildingTrap*, BuildingAttachedTrap);

