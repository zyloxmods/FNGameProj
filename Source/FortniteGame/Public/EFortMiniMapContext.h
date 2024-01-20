#pragma once
#include "CoreMinimal.h"
#include "EFortMiniMapContext.generated.h"

UENUM(BlueprintType)
enum EFortMiniMapContext {
    EFMC_MiniMap,
    EFMC_FullScreenMap,
    EFMC_MAX UMETA(Hidden),
};

