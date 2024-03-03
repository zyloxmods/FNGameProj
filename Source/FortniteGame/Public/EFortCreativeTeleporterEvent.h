#pragma once
#include "CoreMinimal.h"
#include "EFortCreativeTeleporterEvent.generated.h"

UENUM(BlueprintType)
enum class EFortCreativeTeleporterEvent : uint8 {
    Entered,
    Exited,
    Enabled,
    Disabled,
    None,
};

