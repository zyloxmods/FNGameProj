#pragma once
#include "CoreMinimal.h"
#include "OnBuildingLevelChangedDelegate.generated.h"

class UFortOutpostItemDefinition;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBuildingLevelChanged, UFortOutpostItemDefinition*, OutpostBuilding);

