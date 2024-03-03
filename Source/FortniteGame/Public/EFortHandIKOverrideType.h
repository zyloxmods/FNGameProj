#pragma once
#include "CoreMinimal.h"
#include "EFortHandIKOverrideType.generated.h"

UENUM(BlueprintType)
enum class EFortHandIKOverrideType : uint8 {
    UseDefault,
    ForceFK,
    ForceIK,
    ForceFKSnap,
};

