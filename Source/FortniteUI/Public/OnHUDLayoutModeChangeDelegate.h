#pragma once
#include "CoreMinimal.h"
#include "OnHUDLayoutModeChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnHUDLayoutModeChange, bool, bShowCombat, bool, bShowBuild, bool, bShowEdit, bool, bShowCreative);

