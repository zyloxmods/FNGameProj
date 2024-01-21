#pragma once
#include "CoreMinimal.h"
#include "FortGlobalUIContextGenericChangeDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFortGlobalUIContextGenericChange, UObject*, Source);

