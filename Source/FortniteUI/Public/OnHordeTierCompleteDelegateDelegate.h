#pragma once
#include "CoreMinimal.h"
#include "EFortCompletionResult.h"
#include "OnHordeTierCompleteDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHordeTierCompleteDelegate, EFortCompletionResult, Result);

