#pragma once
#include "CoreMinimal.h"
#include "ETwitchViewerStatusType.generated.h"

UENUM(BlueprintType)
enum class ETwitchViewerStatusType : uint8 {
    TwitchViewerStatus_Unknown,
    TwitchViewerStatus_Nonsubscriber,
    TwitchViewerStatus_Subscriber,
    TwitchViewerStatus_Broadcaster,
    TwitchViewerStatus_Max,
};

