#pragma once
#include "CoreMinimal.h"
#include "FortMutatorAudioStinger.generated.h"

class USoundCue;

USTRUCT(BlueprintType)
struct FFortMutatorAudioStinger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* SoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoopTimeBeforeFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeTime;
    
    FORTNITEGAME_API FFortMutatorAudioStinger();
};

