#pragma once
#include "CoreMinimal.h"
#include "Engine/Channel.h"
#include "LiveStreamVoiceChannel.generated.h"

UCLASS(Blueprintable, NonTransient)
class ULiveStreamVoiceChannel : public UChannel {
    GENERATED_BODY()
public:
    ULiveStreamVoiceChannel();
};

