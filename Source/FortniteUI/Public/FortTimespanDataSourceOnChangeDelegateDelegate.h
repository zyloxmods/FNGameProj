#pragma once
#include "CoreMinimal.h"
#include "FortTimespanDataSourceOnChangeDelegateDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FFortTimespanDataSourceOnChangeDelegate, UObject*, Source);

