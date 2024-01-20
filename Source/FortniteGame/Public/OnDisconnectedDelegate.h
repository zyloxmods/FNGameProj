#pragma once
#include "CoreMinimal.h"
#include "OnDisconnectedDelegate.generated.h"

class ABuildingSMActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDisconnected, ABuildingSMActor*, NewlyDisconnectedActor);

