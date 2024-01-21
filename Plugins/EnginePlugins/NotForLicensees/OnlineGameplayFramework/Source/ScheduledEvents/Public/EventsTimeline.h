#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EventChannelState.h"
#include "EventsTimeline.generated.h"

USTRUCT(BlueprintType)
struct FEventsTimeline {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime CacheExpire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEventChannelState> States;
    
    SCHEDULEDEVENTS_API FEventsTimeline();
};

