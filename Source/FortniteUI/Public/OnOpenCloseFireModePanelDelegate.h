#pragma once
#include "CoreMinimal.h"
#include "OnOpenCloseFireModePanelDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOpenCloseFireModePanel, bool, bNewlyOpen);

