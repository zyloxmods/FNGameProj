#pragma once
#include "CoreMinimal.h"
#include "EFortInputMode.generated.h"

UENUM(BlueprintType)
enum class EFortInputMode : uint8 {
    Frontend,
    InGame,
    InGameCursor,
};

