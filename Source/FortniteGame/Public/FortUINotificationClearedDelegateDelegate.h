#pragma once
#include "CoreMinimal.h"
#include "FortUINotificationClearedDelegateDelegate.generated.h"

class UFortUINotification;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFortUINotificationClearedDelegate, UFortUINotification*, ClearedNotification);

