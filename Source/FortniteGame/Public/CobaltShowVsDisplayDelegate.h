#pragma once
#include "CoreMinimal.h"
#include "CobaltWidgetRoundData.h"
#include "CobaltShowVsDisplayDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCobaltShowVsDisplay, const FCobaltWidgetRoundData&, RoundData);

