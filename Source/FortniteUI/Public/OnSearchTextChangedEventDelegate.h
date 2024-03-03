#pragma once
#include "CoreMinimal.h"
#include "OnSearchTextChangedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSearchTextChangedEvent, const FText&, Text);

