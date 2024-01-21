#pragma once
#include "CoreMinimal.h"
#include "EFortRiftSpawnSlotSelectionMode.generated.h"

UENUM(BlueprintType)
enum class EFortRiftSpawnSlotSelectionMode : uint8 {
    Random,
    BestScore,
};

