#pragma once
#include "CoreMinimal.h"
#include "EFortMiniMapHeight.generated.h"

UENUM(BlueprintType)
enum EFortMiniMapHeight {
    EFMH_Equal,
    EFMH_Below,
    EFMH_Above,
    EFMH_MAX UMETA(Hidden),
};

