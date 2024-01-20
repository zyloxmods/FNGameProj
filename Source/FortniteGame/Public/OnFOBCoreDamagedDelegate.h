#pragma once
#include "CoreMinimal.h"
#include "OnFOBCoreDamagedDelegate.generated.h"

class ABuildingFOBCoreActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFOBCoreDamaged, ABuildingFOBCoreActor*, Core, float, DamageTaken);

