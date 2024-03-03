#pragma once
#include "CoreMinimal.h"
#include "OnPawnSpawnedDynamicEventDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPawnSpawnedDynamicEvent, APawn*, Pawn, const int32, RequestID);

