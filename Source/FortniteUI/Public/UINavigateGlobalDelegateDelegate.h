#pragma once
#include "CoreMinimal.h"
#include "UINavigationData.h"
#include "UINavigateGlobalDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUINavigateGlobalDelegate, FUINavigationData, Data);

