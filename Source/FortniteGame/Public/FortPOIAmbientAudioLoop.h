#pragma once
#include "CoreMinimal.h"
#include "FortPOIAmbientAudioLoop.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FFortPOIAmbientAudioLoop {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> LoopingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrossfadeTime;
    
    FORTNITEGAME_API FFortPOIAmbientAudioLoop();
};

