#pragma once
#include "CoreMinimal.h"
#include "EDeployableBaseBoxType.generated.h"

UENUM(BlueprintType)
enum class EDeployableBaseBoxType : uint8 {
    BuildSpace,
    SaveSpace,
    PlotSpace,
    NumSpaceTypes,
};

