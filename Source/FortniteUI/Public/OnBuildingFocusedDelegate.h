#pragma once
#include "CoreMinimal.h"
#include "OnBuildingFocusedDelegate.generated.h"

class ABuildingActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBuildingFocused, ABuildingActor*, FocusedBuilding);

