#pragma once
#include "CoreMinimal.h"
#include "EAthenaPlayerActionAlert.generated.h"

UENUM(BlueprintType)
enum class EAthenaPlayerActionAlert : uint8 {
    PlayerDown,
    PlayerKill,
    EnteredStorm,
    NewZebulonDrone,
    NewZebulonDroneYou,
};

