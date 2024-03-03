#pragma once
#include "CoreMinimal.h"
#include "EBPStatus.generated.h"

UENUM(BlueprintType)
enum class EBPStatus : uint8 {
    UnpurchasedBP,
    PurchasedBP,
};

