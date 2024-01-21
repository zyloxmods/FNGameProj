#pragma once
#include "CoreMinimal.h"
#include "EAileronRollDirection.generated.h"

UENUM(BlueprintType)
enum class EAileronRollDirection : uint8 {
    None,
    Right,
    Left,
};

