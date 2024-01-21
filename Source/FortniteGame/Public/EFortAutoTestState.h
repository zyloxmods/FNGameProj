#pragma once
#include "CoreMinimal.h"
#include "EFortAutoTestState.generated.h"

UENUM(BlueprintType)
enum class EFortAutoTestState : uint8 {
    InitialLoad,
    Login,
    FrontendLoad,
    FrontendPvELoad,
    FrontendPvETest,
    PvEMatchmaking,
    ZoneLoad,
    ZoneTest,
    Finished,
    MAX,
};

