#pragma once
#include "CoreMinimal.h"
#include "ENotificationResult.generated.h"

UENUM(BlueprintType)
enum class ENotificationResult : uint8 {
    Confirmed,
    Declined,
    Unknown,
};

