#pragma once
#include "CoreMinimal.h"
#include "PegasusTimelineEvent.h"
#include "BackendExportedTimelineEvents.generated.h"

USTRUCT(BlueprintType)
struct FBackendExportedTimelineEvents {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PGS_DatabaseId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PGS_DatabaseIdPartitionKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPegasusTimelineEvent> PGS_TimelineEvents;
    
    FORTNITEGAME_API FBackendExportedTimelineEvents();
};

