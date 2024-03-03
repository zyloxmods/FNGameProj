#pragma once
#include "CoreMinimal.h"
#include "EAthenaSquadListUpdateType.generated.h"

UENUM(BlueprintType)
enum class EAthenaSquadListUpdateType : uint8 {
    None,
    CanResurrect,
    FindResurrectChip,
};

