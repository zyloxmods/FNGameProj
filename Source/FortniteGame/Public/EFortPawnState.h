#pragma once
#include "CoreMinimal.h"
#include "EFortPawnState.generated.h"

UENUM(BlueprintType)
enum class EFortPawnState : uint8 {
    Default,
    InCombat,
    DBNO,
    IsReviving = 0x4,
    BeingRevived = 0x8,
    Dead = 0x10,
};

