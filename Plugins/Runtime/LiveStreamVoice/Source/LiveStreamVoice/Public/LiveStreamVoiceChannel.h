#pragma once
#include "CoreMinimal.h"
#include "Engine/VoiceChannel.h"
#include "LiveStreamVoiceChannel.generated.h"

UCLASS(Blueprintable, NonTransient)
class ULiveStreamVoiceChannel : public UVoiceChannel {
    GENERATED_BODY()
public:
    ULiveStreamVoiceChannel();
};

