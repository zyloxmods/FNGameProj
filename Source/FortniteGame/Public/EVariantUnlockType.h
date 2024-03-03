#pragma once
#include "CoreMinimal.h"
#include "EVariantUnlockType.generated.h"

UENUM(BlueprintType)
enum class EVariantUnlockType : uint8 {
    UnlockAll,
    ExclusiveChoice,
};

