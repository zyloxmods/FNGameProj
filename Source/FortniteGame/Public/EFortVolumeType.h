#pragma once
#include "CoreMinimal.h"
#include "EFortVolumeType.generated.h"

UENUM(BlueprintType)
enum class EFortVolumeType : uint8 {
    None,
    Island,
    Published,
    Featured,
    Prefab,
    Hub,
};

