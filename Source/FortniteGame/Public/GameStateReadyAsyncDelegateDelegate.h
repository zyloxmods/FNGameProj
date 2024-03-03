#pragma once
#include "CoreMinimal.h"
#include "GameStateReadyAsyncDelegateDelegate.generated.h"

class AGameStateBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameStateReadyAsyncDelegate, AGameStateBase*, GameState);

