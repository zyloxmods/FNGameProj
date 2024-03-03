#pragma once
#include "CoreMinimal.h"
#include "OnInGameMatchmakingErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInGameMatchmakingError, const FString&, ErrorMessage);

