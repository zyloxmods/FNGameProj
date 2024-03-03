#pragma once
#include "CoreMinimal.h"
#include "EFortQuickBars.h"
#include "OnQuickbarContentsChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnQuickbarContentsChanged, EFortQuickBars, QuickbarIndex, const TArray<int32>&, ChangedSlots);

