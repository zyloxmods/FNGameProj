#pragma once
#include "CoreMinimal.h"
#include "ESpectatorBuildCountType.generated.h"

UENUM(BlueprintType)
enum class ESpectatorBuildCountType : uint8 {
    BuildCount,
    Wood,
    Stone,
    Metal,
};

