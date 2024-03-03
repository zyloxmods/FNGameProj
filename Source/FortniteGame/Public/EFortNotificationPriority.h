#pragma once
#include "CoreMinimal.h"
#include "EFortNotificationPriority.generated.h"

UENUM(BlueprintType)
enum class EFortNotificationPriority : uint8 {
    Vote,
    Friend,
    BoostedXP,
    TwitchHigh,
    GeneralSendNotification,
    TwitchLow = 0xA,
    Max,
};

