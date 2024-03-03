#pragma once
#include "CoreMinimal.h"
#include "EFortWorldRecordAction.generated.h"

UENUM(BlueprintType)
enum class EFortWorldRecordAction : uint8 {
    LoadWorldOnly,
    SaveWorldOnly,
    SaveZoneAndWorld,
    LoadZoneAndWorld,
    SaveDeployableBasesAndWorld,
    Max_None,
};

