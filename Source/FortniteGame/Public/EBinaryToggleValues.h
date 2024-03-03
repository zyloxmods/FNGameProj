#pragma once
#include "CoreMinimal.h"
#include "EBinaryToggleValues.generated.h"

UENUM(BlueprintType)
enum EBinaryToggleValues {
    BTV_Active,
    BTV_Inactive,
    BTV_Either,
    BTV_MAX UMETA(Hidden),
};

