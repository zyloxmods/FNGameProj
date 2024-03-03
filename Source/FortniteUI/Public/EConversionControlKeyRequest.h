#pragma once
#include "CoreMinimal.h"
#include "EConversionControlKeyRequest.generated.h"

UENUM(BlueprintType)
enum class EConversionControlKeyRequest : uint8 {
    AllKeys,
    NonConsumableKeys,
    ConsumableKeys,
};

