#pragma once
#include "CoreMinimal.h"
#include "OnUIExtensionsChangedDelegate.generated.h"

class AFortMinigame;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUIExtensionsChanged, AFortMinigame*, Minigame);

