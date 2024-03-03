#pragma once
#include "CoreMinimal.h"
#include "BotPerceivedSound.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FBotPerceivedSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* SourceActor;
    
    FORTNITEGAME_API FBotPerceivedSound();
};

