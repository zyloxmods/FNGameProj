#pragma once
#include "CoreMinimal.h"
#include "ECancelMarkerReason.generated.h"

UENUM()
enum class ECancelMarkerReason : int32 {
    Ping,
    MapOrDeath,
};

