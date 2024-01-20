#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "FortUserCloudRequest.h"
#include "FortUserCloudRequestHandle.h"
#include "FortUserCloudRequestQueue.generated.h"

USTRUCT(BlueprintType)
struct FFortUserCloudRequestQueue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFreezeIncomingRequests: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortUserCloudRequestHandle FirstFrozenHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle ProcessingTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortUserCloudRequest> RequestQueue;
    
    FORTNITEGAME_API FFortUserCloudRequestQueue();
};

