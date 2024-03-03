#pragma once
#include "CoreMinimal.h"
#include "OnCreativeQuickbarActiveChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCreativeQuickbarActiveChanged, bool, bIsQuickbarActive);

