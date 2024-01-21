#pragma once
#include "CoreMinimal.h"
#include "EFortToastType.generated.h"

UENUM(BlueprintType)
enum class EFortToastType : uint8 {
    Default,
    Subdued,
    Impactful,
};

