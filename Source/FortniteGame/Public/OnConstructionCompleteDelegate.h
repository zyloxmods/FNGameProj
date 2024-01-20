#pragma once
#include "CoreMinimal.h"
#include "OnConstructionCompleteDelegate.generated.h"

class ABuildingSMActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnConstructionComplete, ABuildingSMActor*, BuildingSMActor);

