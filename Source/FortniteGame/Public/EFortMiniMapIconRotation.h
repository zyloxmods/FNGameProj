#pragma once
#include "CoreMinimal.h"
#include "EFortMiniMapIconRotation.generated.h"

UENUM(BlueprintType)
enum EFortMiniMapIconRotation {
    EFMMIR_None,
    EFMMIR_Absolute,
    EFMMIR_Relative,
    EFMMIR_MAX UMETA(Hidden),
};

