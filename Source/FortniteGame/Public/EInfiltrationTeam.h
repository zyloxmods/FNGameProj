#pragma once
#include "CoreMinimal.h"
#include "EInfiltrationTeam.generated.h"

UENUM(BlueprintType)
enum class EInfiltrationTeam : uint8 {
    Attacking,
    Defending,
    NumOfTeams,
};

