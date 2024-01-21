#pragma once
#include "CoreMinimal.h"
#include "OnItemReceivedNotificationShownDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemReceivedNotificationShown, bool, IsActive);

