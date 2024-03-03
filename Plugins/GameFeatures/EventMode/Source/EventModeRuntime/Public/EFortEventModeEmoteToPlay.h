#pragma once
#include "CoreMinimal.h"
#include "EFortEventModeEmoteToPlay.generated.h"

UENUM(BlueprintType)
enum class EFortEventModeEmoteToPlay : uint8 {
    Emote1,
    Emote2,
    Emote3,
    RandomEmote,
    QuickEmotes,
};

