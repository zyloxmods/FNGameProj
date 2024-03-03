#pragma once
#include "CoreMinimal.h"
#include "HUDMessageData.h"
#include "OnShowHUDMessageDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnShowHUDMessage, FHUDMessageData, MessageData);

