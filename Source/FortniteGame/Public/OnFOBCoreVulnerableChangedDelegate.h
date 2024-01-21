#pragma once
#include "CoreMinimal.h"
#include "OnFOBCoreVulnerableChangedDelegate.generated.h"

class ABuildingFOBCoreActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFOBCoreVulnerableChanged, ABuildingFOBCoreActor*, Core, bool, bVulnerable);

