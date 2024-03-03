#pragma once
#include "CoreMinimal.h"
#include "OnTetherChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTetherChanged, bool, bIsTethered);

