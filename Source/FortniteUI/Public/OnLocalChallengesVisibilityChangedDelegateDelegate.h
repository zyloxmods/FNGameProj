#pragma once
#include "CoreMinimal.h"
#include "OnLocalChallengesVisibilityChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLocalChallengesVisibilityChangedDelegate, bool, bIsVisible);

