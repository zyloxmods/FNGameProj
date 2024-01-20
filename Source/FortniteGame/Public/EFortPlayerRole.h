#pragma once
#include "CoreMinimal.h"
#include "EFortPlayerRole.generated.h"

UENUM()
enum class EFortPlayerRole : int32 {
    Player,
    LiveSpectator,
    ReplaySpectator,
    InactivePlayer,
};

