#pragma once
#include "CoreMinimal.h"
#include "EFortAnnouncementDelivery.generated.h"

UENUM(BlueprintType)
enum class EFortAnnouncementDelivery : uint8 {
    Created,
    Received,
    Ignored,
    Active,
    Stopped,
    Max_None,
};

