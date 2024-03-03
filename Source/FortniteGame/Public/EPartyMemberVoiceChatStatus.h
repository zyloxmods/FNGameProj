#pragma once
#include "CoreMinimal.h"
#include "EPartyMemberVoiceChatStatus.generated.h"

UENUM(BlueprintType)
enum class EPartyMemberVoiceChatStatus : uint8 {
    Disabled,
    Enabled,
    PartyVoice,
    GameVoice,
    PlatformVoice,
};

