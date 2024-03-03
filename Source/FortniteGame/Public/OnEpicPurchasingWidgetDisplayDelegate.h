#pragma once
#include "CoreMinimal.h"
#include "OnEpicPurchasingWidgetDisplayDelegate.generated.h"

class UWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnEpicPurchasingWidgetDisplay, UWidget*, WebWidget, const FString&, OfferId);

