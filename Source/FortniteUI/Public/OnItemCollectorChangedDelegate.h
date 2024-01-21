#pragma once
#include "CoreMinimal.h"
#include "OnItemCollectorChangedDelegate.generated.h"

class ABuildingItemCollectorActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemCollectorChanged, ABuildingItemCollectorActor*, ItemCollector);

