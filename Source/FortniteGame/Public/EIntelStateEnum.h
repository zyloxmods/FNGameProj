#pragma once
#include "CoreMinimal.h"
#include "EIntelStateEnum.generated.h"

UENUM(BlueprintType)
enum class EIntelStateEnum : uint8 {
    None,
    OnGround,
    HeldByAttacker,
    HeldByDefender,
    Downloaded,
    Captured,
    Downloading,
};

