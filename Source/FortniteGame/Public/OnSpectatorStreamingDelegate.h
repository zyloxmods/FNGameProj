#pragma once
#include "CoreMinimal.h"
#include "OnSpectatorStreamingDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpectatorStreaming, bool, bSpectatorStreaming);

