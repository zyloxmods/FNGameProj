#pragma once
#include "CoreMinimal.h"
#include "EEpicLeaderboardTimeWindow.generated.h"

UENUM(BlueprintType)
enum class EEpicLeaderboardTimeWindow : uint8 {
    Daily,
    Weekly,
    Monthly,
    AllTime,
};

