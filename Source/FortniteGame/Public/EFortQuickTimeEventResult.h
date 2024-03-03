#pragma once
#include "CoreMinimal.h"
#include "EFortQuickTimeEventResult.generated.h"

UENUM(BlueprintType)
enum class EFortQuickTimeEventResult : uint8 {
    None,
    Miss,
    Good,
    Great,
    Perfect,
};

