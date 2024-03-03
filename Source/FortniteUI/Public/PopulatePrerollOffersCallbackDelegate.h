#pragma once
#include "CoreMinimal.h"
#include "PopulatePrerollOffersCallbackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FPopulatePrerollOffersCallback, bool, bSuccess);

