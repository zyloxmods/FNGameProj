#pragma once
#include "CoreMinimal.h"
#include "EAthenaRewardVisualImportanceType.generated.h"

UENUM(BlueprintType)
enum class EAthenaRewardVisualImportanceType : uint8 {
    Normal,
    Hot,
    CrazyHot,
    Crazy,
};

