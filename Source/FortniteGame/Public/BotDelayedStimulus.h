#pragma once
#include "CoreMinimal.h"
#include "BotDelayedStimulus.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FBotDelayedStimulus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* SourceActor;
    
    FORTNITEGAME_API FBotDelayedStimulus();
};

