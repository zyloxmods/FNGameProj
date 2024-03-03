#pragma once
#include "CoreMinimal.h"
#include "OnCreativeQuickbarEquippedChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCreativeQuickbarEquippedChanged, bool, bIsQuickbarEquipped);

