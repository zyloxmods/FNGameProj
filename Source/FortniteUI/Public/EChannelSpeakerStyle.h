#pragma once
#include "CoreMinimal.h"
#include "EChannelSpeakerStyle.generated.h"

UENUM(BlueprintType)
enum class EChannelSpeakerStyle : uint8 {
    InGame,
    InLobby,
    OutOfClient,
    Max,
};

