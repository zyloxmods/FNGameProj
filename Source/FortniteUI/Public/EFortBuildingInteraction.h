#pragma once
#include "CoreMinimal.h"
#include "EFortBuildingInteraction.generated.h"

UENUM(BlueprintType)
enum class EFortBuildingInteraction : uint8 {
    None,
    Build,
    Repair,
    Upgrade,
    Edit,
    BeingModified,
    ConfirmEdit,
    Creative,
};

