#pragma once
#include "CoreMinimal.h"
#include "EAthenaEventMatchInfoSortMethod.generated.h"

UENUM(BlueprintType)
enum class EAthenaEventMatchInfoSortMethod : uint8 {
    Eliminations,
    Place,
    Count,
};

