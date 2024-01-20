#pragma once
#include "CoreMinimal.h"
#include "EAuxIndicatorStates.generated.h"

UENUM(BlueprintType)
enum EAuxIndicatorStates {
    AIS_GuidingArrow,
    AIS_ConfirmedArrow,
    AIS_Inactive,
    AIS_Active,
    AIS_MAX UMETA(Hidden),
};

