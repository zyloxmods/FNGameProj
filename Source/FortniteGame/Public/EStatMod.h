#pragma once
#include "CoreMinimal.h"
#include "EStatMod.generated.h"

UENUM(BlueprintType)
enum class EStatMod : uint8 {
    Delta,
    Set,
    Maximum,
};

