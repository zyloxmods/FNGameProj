#pragma once
#include "CoreMinimal.h"
#include "EAshtonStoneStateType.generated.h"

UENUM(BlueprintType)
enum class EAshtonStoneStateType : uint8 {
    NotSpawned,
    Spawned,
    Captured,
    MAX,
};

