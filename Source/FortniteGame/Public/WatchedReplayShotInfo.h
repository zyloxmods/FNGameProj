#pragma once
#include "CoreMinimal.h"
#include "PegasusTimelineEvent.h"
#include "WatchedReplayShotInfo.generated.h"

USTRUCT(BlueprintType)
struct FWatchedReplayShotInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPegasusTimelineEvent> TimelineEvents;
    
    FORTNITEGAME_API FWatchedReplayShotInfo();
};

