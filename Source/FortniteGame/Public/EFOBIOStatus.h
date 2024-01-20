#pragma once
#include "CoreMinimal.h"
#include "EFOBIOStatus.generated.h"

UENUM(BlueprintType)
enum class EFOBIOStatus : uint8 {
    Saving,
    Loading,
    Free,
};

