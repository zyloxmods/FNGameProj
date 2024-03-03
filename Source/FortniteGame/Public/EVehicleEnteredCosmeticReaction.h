#pragma once
#include "CoreMinimal.h"
#include "EVehicleEnteredCosmeticReaction.generated.h"

UENUM(BlueprintType)
enum class EVehicleEnteredCosmeticReaction : uint8 {
    Driver,
    Passenger,
    Both,
};

