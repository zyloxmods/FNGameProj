#pragma once
#include "CoreMinimal.h"
#include "EFortDateTimeStyle.generated.h"

UENUM(BlueprintType)
enum class EFortDateTimeStyle : uint8 {
    Default,
    Short,
    Medium,
    Long,
    Full,
};

