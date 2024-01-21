#pragma once
#include "CoreMinimal.h"
#include "EFortElementalDamageType.generated.h"

UENUM(BlueprintType)
enum class EFortElementalDamageType : uint8 {
    None,
    Fire,
    Ice,
    Lightning,
    Energy,
    MAX,
};

