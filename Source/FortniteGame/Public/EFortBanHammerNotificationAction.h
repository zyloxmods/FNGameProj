#pragma once
#include "CoreMinimal.h"
#include "EFortBanHammerNotificationAction.generated.h"

UENUM(BlueprintType)
enum class EFortBanHammerNotificationAction : uint8 {
    BanAndKick,
    Kick,
};

