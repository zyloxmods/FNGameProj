#pragma once
#include "CoreMinimal.h"
#include "EFortThreatDeactivationType.generated.h"

UENUM(BlueprintType)
enum class EFortThreatDeactivationType : uint8 {
    Off,
    Dormant,
};

