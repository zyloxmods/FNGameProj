#pragma once
#include "CoreMinimal.h"
#include "OnShowNotificationsEnabledChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnShowNotificationsEnabledChanged, bool, bShouldShowNotifications);

