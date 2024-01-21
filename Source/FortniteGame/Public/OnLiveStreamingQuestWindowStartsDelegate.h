#pragma once
#include "CoreMinimal.h"
#include "OnLiveStreamingQuestWindowStartsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLiveStreamingQuestWindowStarts, float, Seconds);

