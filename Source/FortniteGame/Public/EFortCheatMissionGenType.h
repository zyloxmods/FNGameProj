#pragma once
#include "CoreMinimal.h"
#include "EFortCheatMissionGenType.generated.h"

UENUM(BlueprintType)
enum class EFortCheatMissionGenType : uint8 {
    NewGeneration,
    OldGeneration,
    Max_None,
};

