#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EventsTimeline.h"
#include "CalendarDownload.generated.h"

USTRUCT(BlueprintType)
struct FCalendarDownload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime CurrentTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CacheIntervalMins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FEventsTimeline> Channels;
    
    SCHEDULEDEVENTS_API FCalendarDownload();
};

