#pragma once
#include "CoreMinimal.h"
#include "NotificationUISettings.h"
#include "OnShowNotificationDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnShowNotification, const FText&, NotificationText, const FNotificationUISettings&, NotificationSettings);

