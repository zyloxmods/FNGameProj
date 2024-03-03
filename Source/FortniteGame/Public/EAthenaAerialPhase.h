#pragma once
#include "CoreMinimal.h"
#include "EAthenaAerialPhase.generated.h"

UENUM(BlueprintType)
enum class EAthenaAerialPhase : uint8 {
    None,
    BusCantExit,
    BusCanExit,
    BusCanExitEndZebulonDrone,
    Skydiving,
    Parachuting,
    Falling,
};

