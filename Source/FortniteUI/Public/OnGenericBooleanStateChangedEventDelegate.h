#pragma once
#include "CoreMinimal.h"
#include "OnGenericBooleanStateChangedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGenericBooleanStateChangedEvent, bool, bStateOn);

