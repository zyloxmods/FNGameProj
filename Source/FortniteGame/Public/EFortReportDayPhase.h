#pragma once
#include "CoreMinimal.h"
#include "EFortReportDayPhase.generated.h"

UENUM(BlueprintType)
enum class EFortReportDayPhase : uint8 {
    Dawn,
    Dusk,
    ZoneFinished,
    PlayerLogout,
};

