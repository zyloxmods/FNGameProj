#pragma once
#include "CoreMinimal.h"
#include "EFortSubgameSelectOption.generated.h"

UENUM(BlueprintType)
enum class EFortSubgameSelectOption : uint8 {
    Campaign,
    Athena,
    Creative,
    Invalid,
    Count = 0x3,
};

