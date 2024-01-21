#pragma once
#include "CoreMinimal.h"
#include "FortAIDirectorEvent.h"
#include "OnAIDirectorEventFiredDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnAIDirectorEventFired, const FFortAIDirectorEvent&, Event);

