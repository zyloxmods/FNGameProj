#pragma once
#include "CoreMinimal.h"
#include "EOnlineStatus.generated.h"

UENUM(BlueprintType)
enum class EOnlineStatus : uint8 {
    Online,
    Away,
    Offline,
    Blocked,
};

