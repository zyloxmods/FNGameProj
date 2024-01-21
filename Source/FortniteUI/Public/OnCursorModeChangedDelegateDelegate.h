#pragma once
#include "CoreMinimal.h"
#include "OnCursorModeChangedDelegateDelegate.generated.h"

class UUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnCursorModeChangedDelegate, bool, bCursorModeEnabled, FName, ActionName, UUserWidget*, CursorModeContentWidget);

