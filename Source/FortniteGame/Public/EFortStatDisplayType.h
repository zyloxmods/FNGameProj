#pragma once
#include "CoreMinimal.h"
#include "EFortStatDisplayType.generated.h"

UENUM(BlueprintType)
enum class EFortStatDisplayType : uint8 {
    Category,
    Buff,
    Debuff,
    Neutral,
    DoNotDisplay,
};

