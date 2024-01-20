#pragma once
#include "CoreMinimal.h"
#include "EFortClientAnnouncementQueueType.generated.h"

UENUM(BlueprintType)
enum class EFortClientAnnouncementQueueType : uint8 {
    Toasts,
    Stickies,
    Max,
};

