#pragma once
#include "CoreMinimal.h"
#include "OnBuildingDestroyedDelegate.generated.h"

class ABuildingSMActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBuildingDestroyed, const ABuildingSMActor*, Building);

