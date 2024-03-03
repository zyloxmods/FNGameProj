#pragma once
#include "CoreMinimal.h"
#include "EAthenaSpectatorNameplateDetailState.generated.h"

UENUM(BlueprintType)
enum class EAthenaSpectatorNameplateDetailState : uint8 {
    High,
    Low,
    Arrow,
    Off,
};

