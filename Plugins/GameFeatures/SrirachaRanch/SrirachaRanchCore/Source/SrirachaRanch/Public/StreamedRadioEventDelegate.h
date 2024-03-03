#pragma once
#include "CoreMinimal.h"
#include "StreamedRadioEventDelegate.generated.h"

class URadioContentSourceItemDefinition;
class UStreamingRadioPlayerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStreamedRadioEvent, UStreamingRadioPlayerComponent*, Component, URadioContentSourceItemDefinition*, AffectedSource);

