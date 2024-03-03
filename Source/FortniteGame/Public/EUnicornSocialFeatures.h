#pragma once
#include "CoreMinimal.h"
#include "EUnicornSocialFeatures.generated.h"

UENUM(BlueprintType)
enum class EUnicornSocialFeatures : uint8 {
    INVALID,
    FriendPlay,
    DancePartyManpower,
    CongaLineManpower,
    SocialPartyDuration,
    COUNT,
};

