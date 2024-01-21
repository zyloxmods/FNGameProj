#pragma once
#include "CoreMinimal.h"
#include "AsyncTaskResult.h"
#include "AsyncTaskCallbackDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncTaskCallbackDelegate, const FAsyncTaskResult&, Result);

