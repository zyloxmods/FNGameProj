#pragma once
#include "CoreMinimal.h"
#include "ECreativeBossDisplayMode.generated.h"

UENUM(BlueprintType)
enum class ECreativeBossDisplayMode : uint8 {
    DontOverride,
    Yes,
    No,
};

