#pragma once
#include "CoreMinimal.h"
#include "OnAllowShowMainMapChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAllowShowMainMapChanged, bool, bAllowShowMainMap);

