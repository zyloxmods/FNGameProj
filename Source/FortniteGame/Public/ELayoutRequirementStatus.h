#pragma once
#include "CoreMinimal.h"
#include "ELayoutRequirementStatus.generated.h"

UENUM(BlueprintType)
enum class ELayoutRequirementStatus : uint8 {
    Inactive_Invisible,
    Active_Invisible,
    Active_Visible,
};

