#pragma once
#include "CoreMinimal.h"
#include "ReplayHudNotificationSuppressionChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReplayHudNotificationSuppressionChanged, bool, bShouldSuppress);

