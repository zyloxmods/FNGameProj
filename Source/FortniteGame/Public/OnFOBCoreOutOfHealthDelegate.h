#pragma once
#include "CoreMinimal.h"
#include "OnFOBCoreOutOfHealthDelegate.generated.h"

class ABuildingFOBCoreActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFOBCoreOutOfHealth, ABuildingFOBCoreActor*, Core);

