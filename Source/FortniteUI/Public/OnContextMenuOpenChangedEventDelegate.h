#pragma once
#include "CoreMinimal.h"
#include "OnContextMenuOpenChangedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnContextMenuOpenChangedEvent, bool, bIsOpen);

