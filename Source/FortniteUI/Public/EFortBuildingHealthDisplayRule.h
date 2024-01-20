#pragma once
#include "CoreMinimal.h"
#include "EFortBuildingHealthDisplayRule.generated.h"

UENUM(BlueprintType)
enum class EFortBuildingHealthDisplayRule : uint8 {
    Never,
    Allowed,
    Always,
};

