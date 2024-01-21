#pragma once
#include "CoreMinimal.h"
#include "EFortTargetSelectionTestType.generated.h"

UENUM(BlueprintType)
enum class EFortTargetSelectionTestType : uint8 {
    Overlap,
    Swept,
    Ballistic,
};

