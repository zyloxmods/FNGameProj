#pragma once
#include "CoreMinimal.h"
#include "EFortExitRequirements.generated.h"

UENUM(BlueprintType)
enum class EFortExitRequirements : uint8 {
    AnyPlayer,
    WholeSquad,
};

