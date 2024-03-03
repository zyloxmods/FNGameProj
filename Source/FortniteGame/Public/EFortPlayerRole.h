#pragma once
#include "CoreMinimal.h"
#include "EFortPlayerRole.generated.h"

UENUM(BlueprintType)
enum class EFortPlayerRole : uint8 {
    Player,
    LiveSpectator,
    ReplaySpectator,
    InactivePlayer,
};

