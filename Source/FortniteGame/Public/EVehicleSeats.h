#pragma once
#include "CoreMinimal.h"
#include "EVehicleSeats.generated.h"

UENUM(BlueprintType)
enum class EVehicleSeats : uint8 {
    Driver,
    Passenger1,
    Passenger2,
    Passenger3,
    Passenger4,
    Passenger5,
    MaxCount,
};

