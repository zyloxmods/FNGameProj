#pragma once
#include "CoreMinimal.h"
#include "UINavigationData.h"
#include "UINavigateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FUINavigateDelegate, FUINavigationData, Data);

