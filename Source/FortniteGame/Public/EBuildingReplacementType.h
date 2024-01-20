#pragma once
#include "CoreMinimal.h"
#include "EBuildingReplacementType.generated.h"

UENUM(BlueprintType)
enum EBuildingReplacementType {
    BRT_None,
    BRT_Edited,
    BRT_Upgrade,
    BRT_MAX UMETA(Hidden),
};

