#pragma once
#include "CoreMinimal.h"
#include "DeferredCreativeTask.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FDeferredCreativeTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ActorPtr;
    
    FORTNITEGAME_API FDeferredCreativeTask();
};

