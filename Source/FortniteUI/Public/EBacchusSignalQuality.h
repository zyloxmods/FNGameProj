#pragma once
#include "CoreMinimal.h"
#include "EBacchusSignalQuality.generated.h"

UENUM(BlueprintType)
enum class EBacchusSignalQuality : uint8 {
    None,
    Low,
    Medium,
    High,
};

