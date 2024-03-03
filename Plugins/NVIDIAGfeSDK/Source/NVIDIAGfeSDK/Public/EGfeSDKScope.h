#pragma once
#include "CoreMinimal.h"
#include "EGfeSDKScope.generated.h"

UENUM(BlueprintType)
enum class EGfeSDKScope : uint8 {
    Highlights,
    HighlightsRecordVideo,
    HighlightsRecordScreenshot,
    MAX,
};

