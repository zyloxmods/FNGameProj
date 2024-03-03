#pragma once
#include "CoreMinimal.h"
#include "TInteractionType.generated.h"

UENUM(BlueprintType)
enum class TInteractionType :uint8{
    IT_NoInteraction,
    IT_Simple,
    IT_LongPress,
    IT_BuildingEdit,
    IT_BuildingImprovement,
    IT_TrapPlacement,
    IT_MAX UMETA(Hidden),
};

