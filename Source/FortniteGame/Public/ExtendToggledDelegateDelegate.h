#pragma once
#include "CoreMinimal.h"
#include "ExtendToggledDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FExtendToggledDelegate, bool, bIsToggled);

