#pragma once
#include "CoreMinimal.h"
#include "EFortMaterialProgressBarSectionOverflowBehavior.generated.h"

UENUM(BlueprintType)
enum class EFortMaterialProgressBarSectionOverflowBehavior : uint8 {
    PreserveValues,
    ReverseCollapse,
};

