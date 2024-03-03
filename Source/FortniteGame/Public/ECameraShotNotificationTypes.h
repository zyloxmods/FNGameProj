#pragma once
#include "CoreMinimal.h"
#include "ECameraShotNotificationTypes.generated.h"

UENUM(BlueprintType)
enum class ECameraShotNotificationTypes : uint8 {
    Notification,
    HighlightAnnotation,
    TitleScreen,
};

