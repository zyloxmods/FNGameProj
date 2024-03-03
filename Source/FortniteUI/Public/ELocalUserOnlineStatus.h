#pragma once
#include "CoreMinimal.h"
#include "ELocalUserOnlineStatus.generated.h"

UENUM(BlueprintType)
enum class ELocalUserOnlineStatus : uint8 {
    Online,
    Offline,
    Away,
    ExtendedAway,
    DoNotDisturb,
    Chat,
};

