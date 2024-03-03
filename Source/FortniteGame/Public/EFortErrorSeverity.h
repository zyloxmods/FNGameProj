#pragma once
#include "CoreMinimal.h"
#include "EFortErrorSeverity.generated.h"

UENUM(BlueprintType)
enum class EFortErrorSeverity : uint8 {
    Unspecified,
    Silent,
    Passive,
    Blocking,
    SevereBlocking,
};

