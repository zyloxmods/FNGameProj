#pragma once
#include "CoreMinimal.h"
#include "OnHighlightsCountChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHighlightsCountChanged, int32, NumHighlights);

