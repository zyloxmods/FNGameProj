#pragma once
#include "CoreMinimal.h"
#include "OnLoginFlowWidgetDisplayDelegate.generated.h"

class UWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLoginFlowWidgetDisplay, UWidget*, WebWidget);

