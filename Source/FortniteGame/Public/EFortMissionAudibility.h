#pragma once
#include "CoreMinimal.h"
#include "EFortMissionAudibility.generated.h"

UENUM(BlueprintType)
enum class EFortMissionAudibility : uint8 {
    UseVisibility,
    Audible,
    Inaudible,
};

