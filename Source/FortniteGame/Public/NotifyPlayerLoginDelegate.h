#pragma once
#include "CoreMinimal.h"
#include "NotifyPlayerLoginDelegate.generated.h"

class APlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNotifyPlayerLogin, APlayerController*, PlayerController);

