#pragma once
#include "CoreMinimal.h"
#include "EFortContextualReticleTypes.generated.h"

UENUM(BlueprintType)
enum EFortContextualReticleTypes {
    FCR_GenericFailure,
    FCR_Upgrade,
    FCR_Repair,
    FCR_Locked,
    FCR_Placement,
    FCR_Edit,
    FCR_NoTarget,
    FCR_InProgress,
    FCR_None,
    FCR_MAX UMETA(Hidden),
};

