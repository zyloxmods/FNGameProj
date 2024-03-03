#pragma once
#include "CoreMinimal.h"
#include "EBuildingAnim.generated.h"

UENUM(BlueprintType)
enum class EBuildingAnim : uint8 {
    EBA_None,
    EBA_Building,
    EBA_Breaking,
    EBA_Destruction,
    EBA_Placement,
    EBA_DynamicLOD,
    EBA_DynamicShrink,
    EBA_MAX UMETA(Hidden),
};

