#pragma once
#include "CoreMinimal.h"
#include "EFortEncounterSpawnLimitType.generated.h"

UENUM(BlueprintType)
namespace EFortEncounterSpawnLimitType {
    enum Type {
        NoLimit,
        NumPawnsLimit,
        SpawnPointLimit,
        UserDefined,
        MAX,
    };
}

