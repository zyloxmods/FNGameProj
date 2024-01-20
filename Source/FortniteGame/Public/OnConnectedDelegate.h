#pragma once
#include "CoreMinimal.h"
#include "OnConnectedDelegate.generated.h"

class ABuildingSMActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnConnected, ABuildingSMActor*, NewlyConnectedActor);

