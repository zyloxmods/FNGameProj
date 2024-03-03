#pragma once
#include "CoreMinimal.h"
#include "OnLoopSoundTriggeredDelegate.generated.h"

class UAudioComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLoopSoundTriggered, UAudioComponent*, Sound);

