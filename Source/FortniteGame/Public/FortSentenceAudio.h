#pragma once
#include "CoreMinimal.h"
#include "FortFeedbackHandle.h"
#include "FortSentenceAudio.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FFortSentenceAudio {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> Audio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortFeedbackHandle Handle;
    
public:
    FORTNITEGAME_API FFortSentenceAudio();
};

