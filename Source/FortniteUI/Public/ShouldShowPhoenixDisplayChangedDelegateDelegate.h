#pragma once
#include "CoreMinimal.h"
#include "ShouldShowPhoenixDisplayChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FShouldShowPhoenixDisplayChangedDelegate, bool, ShouldShowPhoenixDisplay);

