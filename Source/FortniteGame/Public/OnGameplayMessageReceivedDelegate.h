#pragma once
#include "CoreMinimal.h"
#include "OnGameplayMessageReceivedDelegate.generated.h"

class AController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameplayMessageReceived, AController*, TriggerInstigator);

