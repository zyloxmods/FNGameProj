#pragma once
#include "CoreMinimal.h"
#include "OnConnectedToRootChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnConnectedToRootChanged, bool, bConnected);

