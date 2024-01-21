#pragma once
#include "CoreMinimal.h"
#include "OnFOBCoreTargetableChangedDelegate.generated.h"

class ABuildingFOBCoreActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFOBCoreTargetableChanged, ABuildingFOBCoreActor*, Core, bool, bTargetable);

