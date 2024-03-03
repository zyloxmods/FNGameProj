#pragma once
#include "CoreMinimal.h"
#include "AmbientAudioBase.h"
#include "AmbientAudioLoop.generated.h"

USTRUCT(BlueprintType)
struct AMBIENTAUDIO_API FAmbientAudioLoop : public FAmbientAudioBase {
    GENERATED_BODY()
public:
    FAmbientAudioLoop();
};

