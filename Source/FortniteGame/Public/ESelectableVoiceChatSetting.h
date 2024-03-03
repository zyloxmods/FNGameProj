#pragma once
#include "CoreMinimal.h"
#include "ESelectableVoiceChatSetting.generated.h"

UENUM(BlueprintType)
enum class ESelectableVoiceChatSetting : uint8 {
    Off,
    FriendsOnly,
    Everyone,
};

