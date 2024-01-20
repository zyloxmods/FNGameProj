#pragma once
#include "CoreMinimal.h"
#include "EItemRefundability.generated.h"

UENUM(BlueprintType)
enum class EItemRefundability : uint8 {
    NotRefundable,
    Refundable,
    AlreadyRefunded,
};

