#pragma once
#include "CoreMinimal.h"
#include "EEventTournamentType.generated.h"

UENUM(BlueprintType)
enum class EEventTournamentType : uint8 {
    Online,
    Onsite,
    Test,
    Unknown,
};

