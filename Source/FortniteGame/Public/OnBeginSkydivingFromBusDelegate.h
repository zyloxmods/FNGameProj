#pragma once
#include "CoreMinimal.h"
#include "OnBeginSkydivingFromBusDelegate.generated.h"

class AFortPlayerControllerZone;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBeginSkydivingFromBus, AFortPlayerControllerZone*, PlayerController);

