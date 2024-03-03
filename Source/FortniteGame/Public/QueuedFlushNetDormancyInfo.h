#pragma once
#include "CoreMinimal.h"
#include "QueuedFlushNetDormancyInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FQueuedFlushNetDormancyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    FORTNITEGAME_API FQueuedFlushNetDormancyInfo();
};

