#pragma once
#include "CoreMinimal.h"
#include "EBodyPartVisibilityGrouping.generated.h"

UENUM(BlueprintType)
enum class EBodyPartVisibilityGrouping : uint8 {
    AllParts,
    AllButHead,
    OnlyBackBling,
    BackBlingAndCharm,
};

