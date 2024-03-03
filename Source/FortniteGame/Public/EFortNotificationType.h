#pragma once
#include "CoreMinimal.h"
#include "EFortNotificationType.generated.h"

UENUM(BlueprintType)
enum class EFortNotificationType : uint8 {
    Default,
    Power,
    HealthWarning,
    Error,
    GiftSent,
    VoiceChannel,
    FriendSubscriptionNudge,
    DonutChallenge,
    Max,
};

