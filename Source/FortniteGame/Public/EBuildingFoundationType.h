#pragma once
#include "CoreMinimal.h"
#include "EBuildingFoundationType.generated.h"

UENUM(BlueprintType)
enum EBuildingFoundationType {
    BFT_3x3,
    BFT_5x5,
    BFT_5x10,
    BFT_None,
    BFT_MAX UMETA(Hidden),
};

