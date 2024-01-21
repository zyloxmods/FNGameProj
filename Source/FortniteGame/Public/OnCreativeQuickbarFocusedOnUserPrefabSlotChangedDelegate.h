#pragma once
#include "CoreMinimal.h"
#include "OnCreativeQuickbarFocusedOnUserPrefabSlotChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCreativeQuickbarFocusedOnUserPrefabSlotChanged, bool, bIsUserPrefabSlotFocused, bool, bIsSlotEmpty);

