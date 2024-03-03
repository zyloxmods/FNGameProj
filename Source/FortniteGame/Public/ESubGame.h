#pragma once
#include "CoreMinimal.h"
#include "ESubGame.generated.h"

UENUM(BlueprintType)
enum class ESubGame : uint8 {
    Campaign,
    Athena,
    Invalid,
    Count = 0x2,
    Creative,
};

