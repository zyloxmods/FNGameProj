#pragma once
#include "CoreMinimal.h"
#include "FortAppActivationSoundMixPair.generated.h"

class USoundMix;

USTRUCT(BlueprintType)
struct FFortAppActivationSoundMixPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundMix* TrueMix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundMix* FalseMix;
    
    FORTNITEGAME_API FFortAppActivationSoundMixPair();
};

