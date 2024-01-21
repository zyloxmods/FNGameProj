#pragma once
#include "CoreMinimal.h"
#include "EDeployableBaseConstructionStatus.generated.h"

UENUM(BlueprintType)
enum class EDeployableBaseConstructionStatus : uint8 {
    Constructing,
    Destroying,
    Finished,
};

