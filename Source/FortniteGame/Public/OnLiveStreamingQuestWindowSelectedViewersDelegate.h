#pragma once
#include "CoreMinimal.h"
#include "OnLiveStreamingQuestWindowSelectedViewersDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLiveStreamingQuestWindowSelectedViewers, const TArray<FText>&, Names);

