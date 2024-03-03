#pragma once
#include "CoreMinimal.h"
#include "ECreativeBossDisplayMode.h"
#include "OnBossInfoChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBossInfoChanged, ECreativeBossDisplayMode, DisplayMode);

