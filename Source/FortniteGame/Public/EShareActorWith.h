#pragma once
#include "CoreMinimal.h"
#include "EShareActorWith.generated.h"

UENUM(BlueprintType)
enum class EShareActorWith : uint8 {
    None,
    SquadOnTeam,
    AllTeam,
};

