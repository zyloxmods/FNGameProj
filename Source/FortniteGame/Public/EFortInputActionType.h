#pragma once
#include "CoreMinimal.h"
#include "EFortInputActionType.generated.h"

UENUM(BlueprintType)
enum class EFortInputActionType : uint8 {
    Press,
    Click,
    Hold,
    Release,
};

