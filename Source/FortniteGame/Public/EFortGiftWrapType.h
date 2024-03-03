#pragma once
#include "CoreMinimal.h"
#include "EFortGiftWrapType.generated.h"

UENUM(BlueprintType)
enum class EFortGiftWrapType : uint8 {
    System,
    UserFree,
    UserUnlock,
    UserConsumable,
    Message,
    Ungift,
};

