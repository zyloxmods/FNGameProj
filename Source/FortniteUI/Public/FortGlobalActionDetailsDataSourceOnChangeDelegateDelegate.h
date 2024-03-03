#pragma once
#include "CoreMinimal.h"
#include "FortGlobalActionDetailsDataSourceOnChangeDelegateDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FFortGlobalActionDetailsDataSourceOnChangeDelegate, UObject*, Source);

