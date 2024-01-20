#pragma once
#include "CoreMinimal.h"
#include "EAthenaTravelLogPlayerType.generated.h"

UENUM(BlueprintType)
enum class EAthenaTravelLogPlayerType : uint8 {
    Self,
    Ally,
    Enemy,
    Invalid,
};

