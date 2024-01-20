#pragma once
#include "CoreMinimal.h"
#include "IndexSelectionModelChangedDelegateDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FIndexSelectionModelChangedDelegate, UObject*, Source);

