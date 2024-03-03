#pragma once
#include "CoreMinimal.h"
#include "EFuelLeakType.generated.h"

UENUM(BlueprintType)
enum class EFuelLeakType : uint8 {
    None,
    GenericFromBetweenRearTires,
};

