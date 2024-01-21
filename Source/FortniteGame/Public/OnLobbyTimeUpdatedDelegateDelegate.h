#pragma once
#include "CoreMinimal.h"
#include "OnLobbyTimeUpdatedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyTimeUpdatedDelegate, int32, CurrentTime);

