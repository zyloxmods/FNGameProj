#pragma once
#include "CoreMinimal.h"
#include "OnPhoenixXpChangeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPhoenixXpChangeDelegate, int32, CurrentXp, int32, CurrentLevel);

