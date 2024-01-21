#pragma once
#include "CoreMinimal.h"
#include "EFortClampState.generated.h"

UENUM(BlueprintType)
enum class EFortClampState : uint8 {
    NoClamp,
    MinClamp,
    MaxClamp,
};

