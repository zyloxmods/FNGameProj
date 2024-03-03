#pragma once
#include "CoreMinimal.h"
#include "EBackpackType.generated.h"

UENUM(BlueprintType)
enum class EBackpackType : uint8 {
    Jetpack,
    Medic,
    StormTracker,
    Glider,
};

