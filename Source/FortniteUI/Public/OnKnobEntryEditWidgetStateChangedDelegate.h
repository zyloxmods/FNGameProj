#pragma once
#include "CoreMinimal.h"
#include "OnKnobEntryEditWidgetStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnKnobEntryEditWidgetStateChanged, bool, bOpened);

