#pragma once
#include "CoreMinimal.h"
#include "EFortScalabilityMode.generated.h"

UENUM(BlueprintType)
enum class EFortScalabilityMode : uint8 {
    LowPower,
    Frontend,
};

