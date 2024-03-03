#pragma once
#include "CoreMinimal.h"
#include "RejoinCheck.h"
#include "OnRejoinCheckCompletedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRejoinCheckCompletedDelegate, ERejoinStatus, RejoinStatus);

