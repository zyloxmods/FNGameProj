#pragma once
#include "CoreMinimal.h"
#include "FortOnItemChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FFortOnItemChangedDelegate, bool, bItemChanged, bool, bAmmoChanged, bool, bIngredientsChanged);

