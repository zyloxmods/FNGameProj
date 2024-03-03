#pragma once
#include "CoreMinimal.h"
#include "EFortAlterationOptionType.generated.h"

UENUM(BlueprintType)
enum class EFortAlterationOptionType : uint8 {
    Upgrade,
    Replacement,
    Max_NONE,
};

