#pragma once
#include "CoreMinimal.h"
#include "EFortQuickBars.h"
#include "OnQuickbarFullUpdateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuickbarFullUpdate, EFortQuickBars, QuickbarIndex);

